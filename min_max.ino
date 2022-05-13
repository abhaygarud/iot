int baselineTemp = 0;
int celsius = 0;
int fahrenheit = 0;
int maxTemp = 0;
int minTemp = 10000;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  baselineTemp = 40;
  
  celsius = map(((analogRead(A0) - 20) * 3.04), 0, 1023, -40, 125);
  
  fahrenheit = ((celsius * 9) / 5 + 32);
  Serial.print("Current Temp: ");
  Serial.print(celsius);
  Serial.print(" C, ");
  Serial.print(fahrenheit);
  Serial.println(" F");
  delay(1000); 
  if (fahrenheit > maxTemp)
  {
    maxTemp = fahrenheit;
  }
  if (fahrenheit < minTemp)
  {
    minTemp = fahrenheit;
  }
  
  Serial.print("Max Temperature: ");
  Serial.print(maxTemp);
  Serial.print(" F, ");
  Serial.print("Min Temperature: ");
  Serial.print(minTemp);
  Serial.print(" F ");
  Serial.println();
  delay(2000);
  
   
}
