#include "Functions.hpp"

char command;

void setup() {
  
  Serial.begin (9600);
  
  //configure pin modes
  pinMode (ENABLE_LEFT, OUTPUT);
  pinMode (MOTOR_POSITIVE_LEFT, OUTPUT);
  pinMode (MOTOR_NEGATIVE_LEFT, OUTPUT);  
  
  pinMode (ENABLE_RIGHT, OUTPUT);
  pinMode (MOTOR_POSITIVE_RIGHT, OUTPUT);
  pinMode (MOTOR_NEGATIVE_RIGHT, OUTPUT);  
  
}
 
void loop() {
  if(Serial.available() > 0)
  {
  command = Serial.read();
  Serial.print(command);
  }

  if(command == 'F')
  {
  digitalWrite (ENABLE_LEFT, HIGH);
  digitalWrite (ENABLE_RIGHT, HIGH);

  moveForward();
  command = ' ';
  }


  if(command == 'B')
  {
  digitalWrite (ENABLE_LEFT, HIGH);
  digitalWrite (ENABLE_RIGHT, HIGH);

  moveBackward();
  command = ' ';
  }


  if(command == 'L')
  {
  digitalWrite (ENABLE_LEFT, HIGH);
  digitalWrite (ENABLE_RIGHT, HIGH);

  moveLeft();
  command = ' ';
  }


  if(command == 'R')
  {
  digitalWrite (ENABLE_LEFT, HIGH);
  digitalWrite (ENABLE_RIGHT, HIGH);

  moveRight();
  command = ' ';
  }

  
  if(command == 'S')
  {
  digitalWrite (ENABLE_LEFT, HIGH);
  digitalWrite (ENABLE_RIGHT, HIGH);

  stopMotors();
  command = ' ';
  }

}
