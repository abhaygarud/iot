int led = 13;
int out = A2;
int sensorRead;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(out, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  sensorRead = digitalRead(out);
  Serial.println(sensorRead);
  if (sensorRead == 1)
  {
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
    
  }
  delay(500);
}
