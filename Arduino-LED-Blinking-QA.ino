
/*
  Project Title: Arduino LED Blinking System
  Activity: GitHub-Based QA Documentation
  Course: Project Management
  Course Code: 230746T

  Board: Arduino Uno
  Description:
  This program continuously blinks the built-in
  LED connected to digital pin 13.

  ON Time: 1000 milliseconds
  OFF Time: 1000 milliseconds
*/

#define LED_PIN 13

void setup()
{
    // Configure LED pin as output
    pinMode(LED_PIN, OUTPUT);
}

void loop()
{
    // Turn ON LED
    digitalWrite(LED_PIN, HIGH);
    delay(1000);

    // Turn OFF LED
    digitalWrite(LED_PIN, LOW);
    delay(1000);
}
