#include <Stepper.h>

const int stepsRevolution = 200;

Stepper myStepper (stepsRevolution, 8, 9, 10, 11);

int stepCount = 0;

void setup()
{
}

void loop()
{
 int sensorR = analogRead(A0);
 int motorSpeed = map(sensorR, 0, 1023, 0, 250);
  if (motorSpeed > 0){
    myStepper.setSpeed(motorSpeed);
    myStepper.step(stepsRevolution / 100);
  } 
}