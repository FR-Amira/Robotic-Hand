// capteur actif mayest79ech hata donne bech ya3ml ye5dem .il sefi ethrak capteur resistance varible eli fih tetbdal
// capteur passif lazemo donne bech ya3m action par exemple ultason yestana single bech yebda ye5dem

// Flex Sensor(fih resistance variable: non polarise) capteur actif 
#include<Servo.h>
Servo Sg90;
int ValFlex;

void setup() {
  Sg90.attach(5);
  Serial.begin(9600);

}

void loop() {
  ValFlex = analogRead(A0);
 Serial.println(ValFlex);
 int PwmSp90=map(ValFlex,0,1023,0,180); //0 409/180 113
     Sg90.write(PwmSp90);
}
