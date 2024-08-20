// capteur actif mayest79ech hata donne bech ya3ml ye5dem .il sefi ethrak capteur resistance varible eli fih tetbdal
// capteur passif lazemo donne bech ya3m action par exemple ultason yestana single bech yebda ye5dem

// Flex Sensor(fih resistance variable: non polarise) capteur actif 
#include<Servo.h>
Servo Sg90_1,Sg90_2;
int ValFlex1,ValFlex2;


void setup() {
  Sg90_1.attach(5);
  Serial.begin(9600);

  Sg90_2.attach(3);

}

void loop() {

  //Flex 1
  ValFlex1 = analogRead(A0);

 int Pwm5Sp90=map(ValFlex1,113,409,0,180); //0 409/180 113
     Pwm5Sp90=constrain(Pwm5Sp90,0,180);
     Sg90_1.write(Pwm5Sp90);
      Serial.println(Pwm5Sp90);
     delay(50);
// Flex 2
       ValFlex2 = analogRead(A5);

 int Pwm3Sp90=map(ValFlex2,113,409,0,180); 
     Pwm3Sp90=constrain(Pwm3Sp90,0,180);
     Sg90_2.write(Pwm3Sp90);
      Serial.println(Pwm3Sp90);
      delay(50);
}
