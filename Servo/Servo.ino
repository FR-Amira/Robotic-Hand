#include<Servo.h>
Servo Sg90;

void setup() {
  Sg90.attach(5);

}

void loop() {
  for(int angle=0 ; angle<=180 ;angle+=10)
  {
  Sg90.write(angle);
  delay(1000);
 }
  for(int angle=170 ; angle>0 ;angle-=10) /* 170 mech 180 car intilisation 180 et >0 mech =0 car bech ya9ef*/
  {
  Sg90.write(angle);
  delay(1000);
 }
}
