#include <Arduino.h>

int blinkPin1 = 0;
int blinkPin2 = 1;
int blinkPin3 = 2;
int blinkPin4 = 3;
int blinkPin5 = 4;

void setup()
{
  pinMode(blinkPin1, OUTPUT);
  pinMode(blinkPin2, OUTPUT);
  pinMode(blinkPin3, OUTPUT);
  pinMode(blinkPin4, OUTPUT);
  pinMode(blinkPin5, OUTPUT);
}

void loop()
{
  digitalWrite(blinkPin1, HIGH);
  digitalWrite(blinkPin2, LOW);
  digitalWrite(blinkPin3, LOW);
  digitalWrite(blinkPin4, LOW);
  digitalWrite(blinkPin5, LOW);
  delay(100);
  digitalWrite(blinkPin1, LOW);
  digitalWrite(blinkPin2, HIGH);
  digitalWrite(blinkPin3, LOW);
  digitalWrite(blinkPin4, LOW);
  digitalWrite(blinkPin5, LOW);
  delay(100);
  digitalWrite(blinkPin1, LOW);
  digitalWrite(blinkPin2, LOW);
  digitalWrite(blinkPin3, HIGH);
  digitalWrite(blinkPin4, LOW);
  digitalWrite(blinkPin5, LOW);
  delay(100);
  digitalWrite(blinkPin1, LOW);
  digitalWrite(blinkPin2, LOW);
  digitalWrite(blinkPin3, LOW);
  digitalWrite(blinkPin4, HIGH);
  digitalWrite(blinkPin5, LOW);
  delay(100);
  digitalWrite(blinkPin1, LOW);
  digitalWrite(blinkPin2, LOW);
  digitalWrite(blinkPin3, LOW);
  digitalWrite(blinkPin4, LOW);
  digitalWrite(blinkPin5, HIGH);
  delay(100);
}