int o=A0;
int p=A1;
int q=A2;
void setup() {
  // put your setup code here, to run once:
pinMode(o,INPUT);
pinMode(p,INPUT);
pinMode(q,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int x=analogRead(o);
int y=analogRead(p);
int z=analogRead(q);
//delay(400);
Serial.print("x");
Serial.println(x);
Serial.print("y");
Serial.println(y);
Serial.print("z");
Serial.println(z);
}
