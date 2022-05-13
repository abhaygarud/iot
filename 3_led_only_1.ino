int red=4;
int yellow=3;
int green=2;
 int counter=100;

void setup() {
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  
  // put your main code here, to run repeatedly:
if(counter==300)
{
  counter=0;
}
void Change_light();
counter+=1;
}

void Change_light()
{
  
  if(counter==100)
  {
    digitalWrite(red,HIGH);
    delay(100);
  }
  else if(counter>101 && counter<200)
  {
    digitalWrite(red,LOW);
    digitalWrite(yellow,HIGH);
    delay(50);
  }
  else(counter>200)
  {
    digitalWrite(green,HIGH);
    digitalWrite(telloe,LOW);
    delay(100);
  }
}
