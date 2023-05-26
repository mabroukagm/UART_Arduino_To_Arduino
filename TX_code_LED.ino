#include <SoftwareSerial.h>
SoftwareSerial softSerial(8,9);
//long time1;
void setup()  
{
  Serial.begin(9600);
  softSerial.begin(9600);
 // time1=millis();
} 
void loop()  
{ 
  //if(millis()-time1>=500)
 // {
    softSerial.print(1);
    delay(5000);
    softSerial.print(0);
    delay(5000);
   // time1=millis();
//}
}
