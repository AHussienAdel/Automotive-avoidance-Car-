#include <Servo.h>
#define servoPin  9
Servo servo;
int motor_left = 2;
int motor_right = 3;
#define echo  8
#define trig  9
unsigned long duration ;
int distance =0;

void setup() {
pinMode(motor_left, OUTPUT); 
pinMode(motor_right, OUTPUT); 
pinMode(echo, INPUT); 
pinMode(trig, OUTPUT); 
servo.attach(servoPin);
Serial.begin(9600);

}
void loop() {
  ///servo.write(180);
  ///delay(1000);
  digitalWrite(trig,LOW);
  delayMicroseconds(5);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  duration = pulseIn (echo,HIGH);
  distance= duration*0.034/2;
  Serial.print("Distance:");
  Serial.print(distance);
  Serial.print(" cm");

}
void move_forward()
  {digitalWrite(motor_right, HIGH);
   digitalWrite(motor_left, HIGH);
  }
  void stop()
  {digitalWrite(motor_right, LOW);
   digitalWrite(motor_left, LOW);
  }
  void move_right()
  {digitalWrite(motor_right, HIGH);
   digitalWrite(motor_left,LOW );
  }
  void move_left()
  {digitalWrite(motor_right, LOW);
   digitalWrite(motor_left,HIGH);
  }
