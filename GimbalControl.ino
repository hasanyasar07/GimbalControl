
#include <Servo.h>  /* Servo kutuphanesi projeye dahil edildi */
Servo servoNesnesi;  /* servo motor nesnesi yaratildi */

void setup()
{
  servoNesnesi.attach(3);  /* Servo motor 9 numarali pine baglandi */
  Serial.begin(9600);
}
 
void loop()
{

 int sensorValue = analogRead(A0);
 
  sensorValue=sensorValue/10;
  sensorValue=map(sensorValue,30,90,60,115);
  servoNesnesi.write(sensorValue);  /* Motorun mili 100. dereceye donuyor */
  Serial.print("Ptn:");Serial.println(sensorValue);
  
  //delay(100);
  
}

