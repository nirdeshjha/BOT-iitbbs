int a=6;
int b=7;
int c=8;
int d=9;
int e=10;
int f=11;
int g=12;
int h=13;

void setup() {
  // put your setup code here, to run once:
pinMode(a,INPUT);
pinMode(b,INPUT);
pinMode(c,INPUT);
pinMode(d,INPUT);
pinMode(e,INPUT);
pinMode(f,INPUT);
pinMode(g,INPUT);
pinMode(h,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int i=digitalRead(a);
int j=digitalRead(b);
int k=digitalRead(c);
int l=digitalRead(d);
int m=digitalRead(e);
int n=digitalRead(f);
int o=digitalRead(g);
int p=digitalRead(h);
Serial.println(i);
Serial.println(j);
Serial.println(k);
Serial.println(l);
Serial.println(m);
Serial.println(n);
Serial.println(o);
Serial.println(p);
//
//delay(2000);
}
