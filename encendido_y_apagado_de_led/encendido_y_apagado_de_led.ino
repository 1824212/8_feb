int red = 5;
int green = 6;
int blue = 7;
int on = 100;
int off = 400;

void setup() {
  // put your setup code here, to run once:
pinMode(red,OUTPUT);
pinMode(green,OUTPUT);
pinMode(blue,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(red,HIGH);
delay (on);
digitalWrite(red,LOW);
delay (off);
digitalWrite(green,HIGH);
delay (on);
digitalWrite(green,LOW);
delay (off);
digitalWrite(blue,HIGH);
delay (on);
digitalWrite(blue,LOW);
delay (off);

}
