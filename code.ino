void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);// giving output as pin 13

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH);//light up LED
  delay(1000);// delay whole code and light up LED for 1 second
  digitalWrite(13,LOW);//for turning off the LED
  delay(1000)

}
