#include <Servo.h>

int i = 0;

int j = 0;

int pos = 0;

int m = 0;

Servo servo_2;

void setup()
{
  servo_2.attach(2);

}

void loop()
{
  for (pos = 1; pos <= 180; pos += 1) {
    servo_2.write(pos);
    delay(25); // Wait for 25 millisecond(s)
  }
  for (m = 180; m <= 0; m += 1) {
    servo_2.write(pos);
    delay(25); // Wait for 25 millisecond(s)
  }
}