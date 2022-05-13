void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  Serial.println("Enter the number");
  while(Serial.available()==0){}
  
   int num=Serial.parseInt();
   Serial.print("square of ");
   Serial.print(num);
   Serial.print("is :");
   Serial.println(sq(num));
  
  
  // put your main code here, to run repeatedly:

}
