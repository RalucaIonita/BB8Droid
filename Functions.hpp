#define ENABLE_LEFT 5
#define MOTOR_POSITIVE_LEFT 6
#define MOTOR_NEGATIVE_LEFT 7
 
//Motor RIGHT
#define ENABLE_RIGHT 8
#define MOTOR_POSITIVE_RIGHT 9
#define MOTOR_NEGATIVE_RIGHT 10





void moveForward()
{
  digitalWrite (MOTOR_POSITIVE_LEFT, HIGH);
  digitalWrite (MOTOR_NEGATIVE_LEFT, LOW);
 
  digitalWrite (MOTOR_POSITIVE_RIGHT, HIGH);
  digitalWrite (MOTOR_NEGATIVE_RIGHT, LOW);
}



void moveBackward()
{
  digitalWrite (MOTOR_POSITIVE_LEFT, LOW);
  digitalWrite (MOTOR_NEGATIVE_LEFT, HIGH);
 
  digitalWrite (MOTOR_POSITIVE_RIGHT, LOW);
  digitalWrite (MOTOR_NEGATIVE_RIGHT, HIGH);
}




void moveLeft()
{
  digitalWrite (MOTOR_POSITIVE_LEFT, HIGH);
  digitalWrite (MOTOR_NEGATIVE_LEFT, LOW);
 
  digitalWrite (MOTOR_POSITIVE_RIGHT, LOW);
  digitalWrite (MOTOR_NEGATIVE_RIGHT, LOW);
}



void moveRight()
{
  
  digitalWrite (MOTOR_POSITIVE_LEFT, LOW);
  digitalWrite (MOTOR_NEGATIVE_LEFT, LOW);
 
  digitalWrite (MOTOR_POSITIVE_RIGHT, HIGH);
  digitalWrite (MOTOR_NEGATIVE_RIGHT, LOW); 
}



void stopMotors()
{
  
  digitalWrite (MOTOR_POSITIVE_LEFT, LOW);
  digitalWrite (MOTOR_NEGATIVE_LEFT, LOW);
 
  digitalWrite (MOTOR_POSITIVE_RIGHT, LOW);
  digitalWrite (MOTOR_NEGATIVE_RIGHT, LOW); 
}
