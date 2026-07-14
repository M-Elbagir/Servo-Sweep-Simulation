#include <Servo.h>

Servo servos[4];

int pins[] = {13, 12, 11, 10};

int dt = 6;


void setup()
{
  for (int servo = 0; servo < 4; servo++)
  {
  	servos[servo].attach(pins[servo]);
  }
}

void loop()
{
  for (int pos = 0; pos <= 180; pos++)
  {
    for (int servo = 0; servo < 4; servo++)
    {
      servos[servo].write(pos);
    }
    delay(dt);
  }
  
  for (int pos = 180; pos >= 0; pos--)
  {
    for (int servo = 0; servo < 4; servo++)
    {
      servos[servo].write(pos);
    }
    delay(dt);
  }
  
  for (int pos = 0; pos <= 90; pos++)
  {
    for (int servo = 0; servo < 4; servo++)
    {
      servos[servo].write(pos);
    }
    delay(dt);
  }
  
  delay(5000); 
  
  for (int pos = 90; pos >= 0; pos--)
  {
    for (int servo = 0; servo < 4; servo++)
    {
      servos[servo].write(pos);
    }
    delay(dt);
  }
}