int a=2;
int b=3;
int c=4;
int d=5;
int e=9;//m2
int f=10;//
int g=11;//m1
int h=12;//
int i=13;//

void setup() {
  // put your setup code here, to run once:
pinMode(a,OUTPUT);
pinMode(b,OUTPUT);
pinMode(c,OUTPUT);
pinMode(d,OUTPUT);
pinMode(e,INPUT);
pinMode(f,INPUT);
pinMode(g,INPUT);
pinMode(h,INPUT);
pinMode(i,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

int j=digitalRead(e);
int k=digitalRead(f);//
int l=digitalRead(g);
int m=digitalRead(h);//
int n=digitalRead(i);//
if(k==0&&m==0&&n==0&&j==1&&l==1){
  analogWrite(b,250);
  digitalWrite(a,LOW);
  analogWrite(d,250);
  digitalWrite(c,LOW);
}
else if(l==1&&k==1&&n==0){
  analogWrite(b,250);
  digitalWrite(a,LOW);
  analogWrite(d,0);
  digitalWrite(c,HIGH);
}
else if(k==0&&j==1&&n==1){
  analogWrite(b,0);
  digitalWrite(a,HIGH);
  analogWrite(d,250);
  digitalWrite(c,LOW);
}
/*else if(k==1||m==1||n==1||j==0&&l==1)
{
  analogWrite(b,250);
  digitalWrite(a,LOW);
  analogWrite(d,0);
  digitalWrite(c,HIGH);
}
else if(k==1||m==1||n==1||j==1&&l==0)
{
  analogWrite(b,0);
  digitalWrite(a,HIGH);
  analogWrite(d,250);
  digitalWrite(c,LOW);
}*/
else if(k==0&&m==0&&n==0&&j==0&&l==1)
{
  analogWrite(b,250);
  digitalWrite(a,LOW);
  analogWrite(d,0);
  digitalWrite(c,HIGH);
}
else if(k==0&&m==0&&n==0&&j==1&&l==0)
{
  analogWrite(b,0);
  digitalWrite(a,HIGH
  );
  analogWrite(d,250);
  digitalWrite(c,LOW);
}
else if(k==0&&m==0&&n==0&&j==0&&l==0)
{
  analogWrite(b,0);
  digitalWrite(a,LOW);
  analogWrite(d,0);
  digitalWrite(c,LOW);
}
else if(k==1&&m==1&&n==1&&j==1&&l==1)
{
  analogWrite(b,0);
  digitalWrite(a,LOW);
  analogWrite(d,0);
  digitalWrite(c,LOW);
}


//delay(2000);
//digitalWrite(a,LOW);
//digitalWrite(c,HIGH);

}
