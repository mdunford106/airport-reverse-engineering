"""Offline decoders and arithmetic checks; never opens device nodes."""
import struct,json,argparse

def fan_payload(hex_bytes):
 b=bytes.fromhex(hex_bytes)
 if len(b)!=20:raise ValueError('fan payload must be exactly 20 bytes')
 return dict(zip(['channel','polarity','period_ns','duty_ns','enabled'],struct.unpack('<5I',b)))
def envsys_payload(hex_bytes):
 b=bytes.fromhex(hex_bytes)
 if len(b)!=32:raise ValueError('envsys payload must be exactly 32 bytes')
 vals=struct.unpack('<8I',b)
 return dict(zip(['sensor','current_bits','minimum_bits','maximum_bits','average_bits','warning_flags','valid_flags','units'],vals))
def trunc_div(n,d):return (abs(n)//abs(d))*(-1 if (n<0)!=(d<0) else 1)
def temperature_wire(raw_microkelvin):
 if raw_microkelvin==0:return 0
 return trunc_div(raw_microkelvin-273150000,100000)&65535

def self_check():
 assert fan_payload('00'*20)['channel']==0
 assert len(envsys_payload('00'*32))==8
 for setting in range(256):
  ns=setting*100000//255
  assert 0<=ns<=100000
  assert ns*1000000//1000000000==setting*100//255
 for kelvin,result in [(273150000,0),(298150000,250),(268150000,65486),(145150000,64256),(148150000,64286),(0,0)]:
  assert temperature_wire(kelvin)==result
 print('Passed payload-size, all 256 duty settings, and temperature/sentinel checks.')
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('--self-check',action='store_true');p.add_argument('--fan-hex');p.add_argument('--envsys-hex');p.add_argument('--microkelvin',type=int);a=p.parse_args()
 if a.self_check:self_check()
 if a.fan_hex:print(json.dumps(fan_payload(a.fan_hex),indent=2))
 if a.envsys_hex:print(json.dumps(envsys_payload(a.envsys_hex),indent=2))
 if a.microkelvin is not None:print(temperature_wire(a.microkelvin))
