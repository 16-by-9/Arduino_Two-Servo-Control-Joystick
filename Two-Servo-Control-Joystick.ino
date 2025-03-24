#include <Servo.h>
  
Servo servo1;
Servo servo2;
int joyX = A0;
int joyY = A1;
  
int servoVal;
  
void setup() 
{
  servo1.attach(3);
  servo2.attach(5);
}
  
void loop()
{
  
  servoVal = analogRead(joyX);
  servoVal = map(servoVal, 0, 1023, 0, 180);
  servo1.write(servoVal);

  servoVal = analogRead(joyY);
  servoVal = map(servoVal, 0, 1023, 70, 180);
  servo2.write(servoVal);
  delay(15);  
}
