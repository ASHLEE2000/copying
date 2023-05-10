#define LED1 11
#define LED2 10
#define LED3 9
#define LED4 8
#define LED5 7
#define LED6 6

void setup() {
  // put your setup code here, to run once:
pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);
pinMode(LED3,OUTPUT);
pinMode(LED4,OUTPUT);
pinMode(LED5,OUTPUT);
pinMode(LED6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(LED2,HIGH);
digitalWrite(LED4,HIGH);
digitalWrite(LED6,HIGH);
delay(1000);

digitalWrite(LED2,LOW);
digitalWrite(LED4,LOW);
digitalWrite(LED6,LOW);
digitalWrite(LED1,HIGH);
digitalWrite(LED3,HIGH);
digitalWrite(LED5,HIGH);
delay(1000);

digitalWrite(LED1,LOW);
digitalWrite(LED3,LOW);
digitalWrite(LED5,LOW);
}
