int green=12;
int red=13;
int yellow=11;
int red1=10;

void setup() {
  // put your setup code here, to run once:
pinMode(red,OUTPUT);
pinMode(yellow,OUTPUT);
pinMode(green,OUTPUT);
pinMode(red1,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(red,HIGH);
digitalWrite(yellow,HIGH);
digitalWrite(green,HIGH);
digitalWrite(red1,HIGH);
delay(2000);
digitalWrite(red,LOW);
digitalWrite(yellow,LOW);
digitalWrite(green,LOW);
digitalWrite(red1,LOW);
delay(2000);
digitalWrite(red,HIGH);
delay(3000);
digitalWrite(red,LOW);
delay(3000);
digitalWrite(green,HIGH);
delay(5000);
digitalWrite(green,LOW);
delay(5000);
digitalWrite(yellow,HIGH);
delay(1000);
digitalWrite(yellow,LOW);
delay(1000);
digitalWrite(red1,HIGH);
delay(2000);
digitalWrite(red1,LOW);
delay(2000);
}
