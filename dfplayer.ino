
#include<SoftwareSerial.h>
#include<DFPlayer_Mini_Mp3.h>
SoftwareSerial mySerial(10,11);//RX TX


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  mySerial.begin(9600);

  
mp3_set_serial(mySerial);
delay(1);
mp3_set_volume(35);
}

void loop() {
  // put your main code here, torun repeatedly:
 delay(5000);
 if(Serial.find("ok")) {
mp3_play(1);
delay(5000);}
 else if(Serial.find("apakah anda makan")) {
mp3_play(2);
delay(5000);}
else{
  mp3_play(1);
}
}




