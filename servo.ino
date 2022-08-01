#include <Servo.h>

Servo myservo;

int deg = 0;

void setup() {
  Serial.begin(9600);
  myservo.attach(9);

  myservo.write(deg);
}

void loop() {
  for(deg = 0; deg <= 180; deg ++)
  {
    myservo.write(deg);
    delay(50);
  }

  for(deg = 180; deg >= 0; deg --)
  {
    myservo.write(deg);
    delay(50);
  }

}
