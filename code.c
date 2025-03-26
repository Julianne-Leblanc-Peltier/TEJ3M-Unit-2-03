/*
  Created by: Julianne Leblanc-Peltier
  Created on: March 2025
  This program turns on and off an LED for 1 second each
*/

int pin5 = 5;

void setup()
{
  pinMode(pin5, OUTPUT);
}

void loop()
{
  digitalWrite(pin5, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(pin5, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
