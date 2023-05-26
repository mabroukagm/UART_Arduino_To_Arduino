#include <SoftwareSerial.h>
#define Led 13
char number;
SoftwareSerial softSerial(8,9);

void setup()  
{
  softSerial.begin(9600);
  Serial.begin(9600);
  pinMode(Led,OUTPUT);
 //  softSerial.setTimeout(5);
   digitalWrite(Led,LOW);
   
} 
void loop()  
{ 
  if (softSerial.available())
  {number=softSerial.read();
  if (number=='0')
  {
  digitalWrite(Led,HIGH);
  }
  if (number=='1')
  {
  digitalWrite(Led,LOW);
 }
  Serial.print(number);
  }
}
