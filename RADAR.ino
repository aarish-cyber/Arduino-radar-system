#include <Servo.h>

Servo sweep;

int trig = 10;
int echo = 11;
int buzz = 9;
int blue = 6;
int green = 5;
int red = 4;

long duration;

float distance;

void setup() {
  // put your setup code here, to run once:
  sweep.attach(3, 500, 2450);

  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

  pinMode(buzz, OUTPUT);

  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int deg = 0; deg <= 180; deg++) {
    sweep.write(deg);
    delay(10);

    digitalWrite(trig, LOW);
    delay(10);

    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(trig, LOW);

    duration = pulseIn(echo, HIGH);
    distance = duration * 0.017;

    if(distance > 40)
    {
      digitalWrite(green, HIGH);
      noTone(buzz);
      digitalWrite(red, LOW);
      digitalWrite(blue, LOW);
    }
    else if (distance > 10)
    {
      digitalWrite(red, HIGH);
      digitalWrite(green, HIGH);
      digitalWrite(blue, LOW);
      tone(buzz, 100);
    }
    else
    {
      digitalWrite(red, HIGH);
      digitalWrite(green, LOW);
      digitalWrite(blue, LOW);
      tone(buzz, 500);
    }
  }

  for (int deg = 180; deg >= 0; deg--) {
    sweep.write(deg);
    delay(10);

    digitalWrite(trig, LOW);
    delay(10);

    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(trig, LOW);

    duration = pulseIn(echo, HIGH);
    distance = duration * 0.017;

    if(distance > 40)
    {
      digitalWrite(green, HIGH);
      noTone(buzz);
      digitalWrite(red, LOW);
      digitalWrite(blue, LOW);
    }
    else if (distance > 10)
    {
      digitalWrite(red, HIGH);
      digitalWrite(green, HIGH);
      digitalWrite(blue, LOW);
      tone(buzz, 100);
    }
    else
    {
      digitalWrite(red, HIGH);
      digitalWrite(green, LOW);
      digitalWrite(blue, LOW);
      tone(buzz, 500);
    }
  }
}
