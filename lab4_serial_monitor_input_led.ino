int red=4;
int yellow=3;
int green=2;
char Colour_Blink;


void setup() {
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  while(Serial.available()==0){}
  Colour_Blink=Serial.read();
  if(Colour_Blink=='y'||Colour_Blink=='Y')
  {
    digitalWrite(yellow,HIGH);
     digitalWrite(red,LOW);
    digitalWrite(green,LOW);
    delay(50);
  }
  // put your main code here, to run repeatedly:
else if(Colour_Blink=='r'||Colour_Blink=='R')
  {
    digitalWrite(yellow,LOW);
    digitalWrite(green,LOW);
    digitalWrite(red,HIGH);
    delay(50);
  }
  else if(Colour_Blink=='g'||Colour_Blink=='G')
  {
    digitalWrite(yellow,LOW);
    digitalWrite(red,LOW);
    digitalWrite(green,HIGH);
    delay(50);
  }
  else
  {
    Serial.println("wrong input");
  }
}
