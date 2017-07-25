#include <SoftwareSerial.h>

#define rx 10
#define tx 11

SoftwareSerial mySerial(rx, tx);

void setup() {
  
  Serial.begin(9600);
  Serial.println("Listo!");

  mySerial.begin(38400);
  mySerial.println("listo blueetooth");
}

void loop() { // run over and over
  if (mySerial.available()) {
    Serial.write(mySerial.read());
  }
  if (Serial.available()) {
    mySerial.write(Serial.read());
  }
}

