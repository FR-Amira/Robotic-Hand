/* BY FRIH AMIRA */

#include <Servo.h>

Servo Sg90_1, Sg90_2, Sg90_3, Sg90_4, Sg90_5, Sg90_6;
int ValFlex1, ValFlex2, ValFlex3, ValFlex4, ValFlex5;

void setup() {
  Sg90_1.attach(5);
  Sg90_2.attach(3);
  Sg90_3.attach(6);
  Sg90_4.attach(9);
  Sg90_5.attach(10);
  Sg90_6.attach(11);

  Serial.begin(9600);
   Sg90_1.write(0);
   Sg90_2.write(0);
   Sg90_3.write(0);
   Sg90_4.write(0);
   Sg90_5.write(0);
   Sg90_6.write(0);

 
}

void loop() {

  // Flex 1
  ValFlex1 = analogRead(A0);
   int Pwm5Sp90 = map(ValFlex1, 113, 409, 180, 0);
  Pwm5Sp90 = constrain(Pwm5Sp90, 0, 180);
  Sg90_1.write(Pwm5Sp90);
  Serial.print("Flex 1: ");
  Serial.println(Pwm5Sp90);
  delay(50);

  // Flex 2
  ValFlex2 = analogRead(A1);
  int Pwm3Sp90 = map(ValFlex2, 113, 409, 180, 0);
  Pwm3Sp90 = constrain(Pwm3Sp90, 0, 180);
  Sg90_2.write(Pwm3Sp90);
  Serial.print("Flex 2: ");
  Serial.println(Pwm3Sp90);
  delay(50);

  // Flex 3
  ValFlex3 = analogRead(A2);
   int Pwm9Sp90 = map(ValFlex3, 113, 409, 180, 0);
  Pwm9Sp90 = constrain(Pwm9Sp90, 0, 180);
  Sg90_3.write(Pwm9Sp90);
  Serial.print("Flex 3: ");
  Serial.println(Pwm9Sp90);
  delay(50);

  // Flex 4
  ValFlex4 = analogRead(A3);
 int Pwm10Sp90 = map(ValFlex4, 113, 409, 180, 0);
  Pwm10Sp90 = constrain(Pwm10Sp90, 0, 180);
  Sg90_4.write(Pwm10Sp90);
  Serial.print("Flex 4: ");
  Serial.println(Pwm10Sp90);
  delay(50);

  // Flex 5
  ValFlex5 = analogRead(A4);
  int Pwm11Sp90 = map(ValFlex5, 113, 409, 180,0);
  Pwm11Sp90 = constrain(Pwm11Sp90, 0, 180);
  Sg90_5.write(Pwm11Sp90);
  Serial.print("Flex 5: ");
  Serial.println(Pwm11Sp90);
  delay(50);


  // Hand closure condition
  if (Pwm5Sp90 >= 170 && Pwm3Sp90 >= 170 && Pwm9Sp90 >= 170 && Pwm10Sp90 >= 170 && Pwm11Sp90 >= 170) {
    Sg90_6.write(180); // Close hand
    Serial.println("Hand closed.");
  } else {
    Sg90_6.write(0); // Open hand
    Serial.println("Hand open.");
  }
  delay(50);
}
