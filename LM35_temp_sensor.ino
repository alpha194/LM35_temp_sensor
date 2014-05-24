/*Jordan Hill
Temperature sensor that reads value from LM35 from analog Pin 0 and 
turns on a LED on Pin 13 if the temp value is over the cutoff specified
*/
float temp;
int tempPin = 0;
int ledPin = 13;
int cutoff = 20.00;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  temp = analogRead(tempPin);
  temp = temp * 0.48828125;
  Serial.print("Temperature = ");
  Serial.print(temp);
  Serial.print("*C");
  Serial.println();
  if (temp > cutoff) digitalWrite(ledPin, HIGH);
  if (temp < cutoff) digitalWrite(ledPin, LOW);
  delay(1000);
}
