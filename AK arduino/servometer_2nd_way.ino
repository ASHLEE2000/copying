
#include<Servo.h>

Servo myservo;
int pos=0;
//red wire of servo is 5v on arduino board
//brown wire of servo is GND on arduino


void setup() {
  myservo.attach(9);//yellow signal wire of servo
}

void loop() {
  for (pos=0;pos<=180;pos+=1) {
   myservo.write(pos);
    delay(15);
  }
delay(2000);
  for (pos=180;pos>=0;pos-=1) {
    myservo.write(pos);
    delay(15);
  }
}
