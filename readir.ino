int pin=8;

void setup() {
  // put your setup code here, to run once:
pinMode(pin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int t=digitalRead(pin);
Serial.println(t);

delay(500);
}
