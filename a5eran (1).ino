#include <Servo.h>
#define servoPin  5
Servo servo;
#define motor_left 2
#define  motor_right 3
#define x 8
#define  y  9
#define echo  4
#define trig  6
#define en1 10
#define en2 11
unsigned long duration ;
int distance =0;

void setup() {
pinMode(motor_left, OUTPUT); 
pinMode(motor_right, OUTPUT); 
pinMode(x, OUTPUT); 
pinMode(y, OUTPUT); 
pinMode(echo, INPUT); 
pinMode(trig, OUTPUT); 
servo.attach(9);
Serial.begin(9600);

}
void loop() {
  
  move_forward();
  //servo.write(180);
 // delay(1000);
//  digitalWrite(trig,LOW);
//  delayMicroseconds(5);
//  digitalWrite(trig,HIGH);
//  delayMicroseconds(10);
//  digitalWrite(trig,LOW);
//  duration = pulseIn (echo,HIGH);
//  distance= duration*0.034/2;
//  Serial.print("Distance:");
//  Serial.print(distance);
//  Serial.print(" cm");

}
void stop()
  {
    digitalWrite(x, LOW);
   digitalWrite(y, LOW);
      digitalWrite(motor_left, LOW);
    digitalWrite(motor_right, LOW);
  }
void move_forward()
  {
    digitalWrite(x, HIGH); //odam shemal
   digitalWrite(y, LOW); // wara shemal
      digitalWrite(motor_left, HIGH);
    digitalWrite(motor_right, LOW);
  }
  void move_backward()
  {digitalWrite(x, LOW);
   digitalWrite(y, HIGH);
      digitalWrite(motor_left, LOW);
    digitalWrite(motor_right, HIGH);
   
  }
  void move_right()
  {digitalWrite(x, HIGH);
   digitalWrite(y, LOW);
      digitalWrite(motor_left, LOW);
    digitalWrite(motor_right, HIGH);
   
  }
  void move_left()
  {digitalWrite(x, LOW);
   digitalWrite(y, HIGH);
      digitalWrite(motor_left, HIGH);
    digitalWrite(motor_right, LOW);
   
  }
