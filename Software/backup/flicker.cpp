#include <Arduino.h>

int ledPin1 = 0;
int ledPin2 = 1;
int ledPin3 = 2;
int ledPin4 = 3;
int ledPin5 = 4;

void setup() {

  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
}

void loop() {
  // analogWrite(ledPin1, random(50)+200);
  // analogWrite(ledPin2, random(80)+170);
  analogWrite(ledPin1, random(250));
  analogWrite(ledPin2, random(250));
  analogWrite(ledPin3, random(250));
  analogWrite(ledPin4, random(250));
  analogWrite(ledPin5, random(250));  
  delay(random(100));
}