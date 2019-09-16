int o=A0;
int p=A1;
int q=A2;
int r=2;
int s=3;
int t=4;
int u=5;
void setup() {
  // put your setup code here, to run once:
pinMode(o,INPUT);
pinMode(p,INPUT);
pinMode(q,INPUT);
pinMode(r,OUTPUT);
pinMode(s,OUTPUT);
pinMode(t,OUTPUT);
pinMode(u,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int x=analogRead(o);
int y=analogRead(p);
int z=analogRead(q);
if(x>=300&&x<=350&&y>=300&&y<=360)
  {
    analogWrite(s,0);
    digitalWrite(r,LOW);
    analogWrite(u,0);
    digitalWrite(t,LOW);    
  }
if(x>=300&&x<=350&&y>=340)
  {
    analogWrite(s,250);
    digitalWrite(r,LOW);
    analogWrite(u,250);
    digitalWrite(t,LOW);    
  }
  if(x<=350&&x>=300&&y<=300)
  {
    analogWrite(s,250);
    digitalWrite(r,HIGH);
    analogWrite(u,0);
    digitalWrite(t,HIGH);    
  }
  if(x<=300&&y>=300&&y<=340)
  {
    analogWrite(s,250);
    digitalWrite(r,LOW);
    analogWrite(u,0);
    digitalWrite(t,HIGH);    
  }
  if(x>=350&&y>=300&&y<=340)
  {
    analogWrite(s,250);
    digitalWrite(r,HIGH);
    analogWrite(u,250);
    digitalWrite(t,LOW);    
  }  
} 
