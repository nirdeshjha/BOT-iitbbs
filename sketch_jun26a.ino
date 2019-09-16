//#include <Keypad.h>
 
/*char* secretCode = "235711";
int position = 0;
 
const byte rows = 4;
const byte cols = 3;
char keys[rows][cols] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};
*/
int a=6;
int b=7;
int c=8;
int d=9;
int e=10;
int f=11;
int g=12;
int h=13;
int r=2;
int s=3;
int t=4;
int u=5;
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
pinMode(r,OUTPUT);
pinMode(s,OUTPUT);
pinMode(t,OUTPUT);
pinMode(u,OUTPUT);
//Serial.begin(9600);
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

 if(c==1&&g==1&&a==0&&b==0&&d==0&&e==0&&f==0)
  {
    analogWrite(s,0);
    digitalWrite(r,LOW);
    analogWrite(u,0);
    digitalWrite(t,LOW);    
  }
if(g==1&&b==1&&a==0&&c==0&&d==0&&e==0&&f==0)
  {
    analogWrite(s,250);
    digitalWrite(r,LOW);
    analogWrite(u,250);
    digitalWrite(t,LOW);    
  }
  if(b==1&&d==1&&a==0&&c==0&&e==0&&f==0&&g==0)
  {
    analogWrite(s,250);
    digitalWrite(r,HIGH);
    analogWrite(u,0);
    digitalWrite(t,HIGH);    
  }
  if(g==1&&c==1&&a==0&&b==0&&d==0&&e==0&&f==0)
  {
    analogWrite(s,250);
    digitalWrite(r,LOW);
    analogWrite(u,0);
    digitalWrite(t,HIGH);    
  }
  if(c==1&&f==1&&a==0&&b==0&&d==0&&e==0&&g==0)
  {
    analogWrite(s,250);
    digitalWrite(r,HIGH);
    analogWrite(u,250);
    digitalWrite(t,LOW);    
  }  
}
