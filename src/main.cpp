#include <Arduino.h>
#include <Ultrasonic.h>

#define TRIG_PIN 6
#define ECHO_PIN 5
#define RED1 13
#define RED2 12
#define YELLOW1 11
#define YELLOW2 10
#define GREEN1 9
#define GREEN2 8
#define BUZZER 7

int inputPins[] = {RED1, RED2, YELLOW1, YELLOW2, GREEN1, GREEN2, BUZZER};

Ultrasonic ultrasonic(ECHO_PIN,TRIG_PIN);
long distance;

void setup() {
  for (int i = 0; i < 7; i++){
    pinMode(inputPins[i], OUTPUT);
  }
  
  Serial.begin(9600);
}

void loop() {
  // Reads distance
  distance = ultrasonic.read();

  // Puts on LED ligits/buzzer depending on distance from sensor
  (distance < 10) ? digitalWrite(BUZZER, HIGH) : digitalWrite(BUZZER, LOW);
  (distance < 50) ? digitalWrite(RED1, HIGH) : digitalWrite(RED1, LOW);
  (distance < 100) ? digitalWrite(RED2, HIGH) : digitalWrite(RED2, LOW);
  (distance < 150) ? digitalWrite(YELLOW1, HIGH) : digitalWrite(YELLOW1, LOW);
  (distance < 200) ? digitalWrite(YELLOW2, HIGH) : digitalWrite(YELLOW2, LOW);
  (distance < 250) ? digitalWrite(GREEN1, HIGH) : digitalWrite(GREEN1, LOW);
  (distance < 300) ? digitalWrite(GREEN2, HIGH) : digitalWrite(GREEN2, LOW);
  
  Serial.print(distance);
  Serial.println("cm");
  
  delay(1000);
}