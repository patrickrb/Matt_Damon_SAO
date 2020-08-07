#include <Arduino.h>

int blinkPin1 = 0; //bottom right orange
int blinkPin2 = 1; //bottom left yellow
int blinkPin3 = 2; //left red
int blinkPin4 = 4; // right blue
int blinkPin5 = 3; //top red

int brightness = 0; 
int fadeAmount = 5;    

void setup()
{
  pinMode(blinkPin1, OUTPUT);
  pinMode(blinkPin2, OUTPUT);
  pinMode(blinkPin3, OUTPUT);
  pinMode(blinkPin4, OUTPUT);
  pinMode(blinkPin5, OUTPUT);
}

void blink() {
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

void flicker() {
  analogWrite(blinkPin1, random(250));
  analogWrite(blinkPin2, random(250));
  analogWrite(blinkPin3, random(250));
  analogWrite(blinkPin4, random(250));
  analogWrite(blinkPin5, random(250));  
  delay(random(100));
}

void pwm() {
  analogWrite(blinkPin1, brightness);
  analogWrite(blinkPin2, brightness);
  analogWrite(blinkPin3, brightness);
  analogWrite(blinkPin4, brightness);
  analogWrite(blinkPin5, brightness);

  brightness = brightness + fadeAmount;

  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  delay(30);
}

void loop()
{
  for(int loops = 0; loops < 10; loops++) {
    blink();
  }

  for(int loops = 0; loops < 125; loops++){
    flicker();
  }

  for(int loops = 0; loops < 200; loops++){
    pwm();
  }
}

