#include <Arduino.h>
// LED Flicking candle flame effect to PIMP DAT PUMPKIN

/*
 Halloween 2016 Barry Wise
 
  Borrowed and enhanced code from:
      http://www.instructables.com/id/Realistic-Fire-Effect-with-Arduino-and-LEDs
  
  Made ATTINY85 shield for Arduino like this:
      https://www.youtube.com/watch?v=9LjfkjwMqXI
  
  How to use Arduino as ISP for programming via said shield:
      http://www.kobakant.at/DIY/?p=3742

*/

int ledPin1 = 0;
int ledPin2 = 1;
int ledPin3 = 2;

void setup() {

  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  
}

void loop() {

  // analogWrite(ledPin1, random(50)+200);
  // analogWrite(ledPin2, random(80)+170);
  analogWrite(ledPin1, random(250));
  analogWrite(ledPin2, random(250));
  

  digitalWrite(ledPin3, HIGH);   
  
  delay(random(200));

  digitalWrite(ledPin3, LOW);   


}