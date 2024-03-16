#include "BluetoothSerial.h"

BluetoothSerial serialBT;
char cmd;
void setup() {
  // put your setup code here, to run once:
  serialBT.begin("CRAWN,MR MUSA");
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(26, OUTPUT);
  pinMode(33, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(serialBT.available()){
    cmd = serialBT.read();
  }
  if(cmd == '38'){
    digitalWrite(14, HIGH);
  }

  if(cmd == '28'){
    digitalWrite(14, LOW);
  }
  delay(30);

  if(cmd == '52'){
    digitalWrite(26, HIGH);
    

  }

  if(cmd == '62'){
    digitalWrite(26, LOW);
    delay(20);

  }

  if(cmd == '43'){
    digitalWrite(13, HIGH);
    

  }

  if(cmd == '53'){
    digitalWrite(33, LOW);
    delay(20);

  }

  if(cmd == '91'){
    digitalWrite(33, HIGH);
    

  }

  if(cmd == '81'){
    digitalWrite(13, LOW);
    delay(20);

  }
}
