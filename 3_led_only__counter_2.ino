int red=4;
int yellow=3;
int green=2;
 int counter=0;

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
Change_light();
counter+=1;
}

void Change_light()
{
  
  if(counter<100)
  {
    digitalWrite(red,HIGH);
    digitalWrite(green,LOW);
    delay(100);
  }
  else if(counter>101 && counter<200)
  {
    digitalWrite(red,LOW);
    digitalWrite(yellow,HIGH);
    delay(50);
  }
  else if(counter>200 && counter<300)
  {

    digitalWrite(green,HIGH);
    digitalWrite(yellow,LOW);
    delay(100);
  }
}
