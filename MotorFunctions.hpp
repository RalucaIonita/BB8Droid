//Setting up motors' pins
#define ENABLE_LEFT 5
#define MOTOR_POSITIVE_LEFT 6
#define MOTOR_NEGATIVE_LEFT 7
 
#define ENABLE_RIGHT 8
#define MOTOR_POSITIVE_RIGHT 9
#define MOTOR_NEGATIVE_RIGHT 10



//Turning on enable pins on both motors
void enableMotors()
{
  digitalWrite (ENABLE_LEFT, HIGH);
  digitalWrite (ENABLE_RIGHT, HIGH);
}



//Defining the movement

void moveForward()
{
  enableMotors();
  
  //Moving right motor forward 
  digitalWrite (MOTOR_POSITIVE_LEFT, HIGH);
  digitalWrite (MOTOR_NEGATIVE_LEFT, LOW);

  //Moving left motor forward
  digitalWrite (MOTOR_POSITIVE_RIGHT, HIGH);
  digitalWrite (MOTOR_NEGATIVE_RIGHT, LOW);
}


void moveBackward()
{
  enableMotors();
  
  //Moving left motor backward
  digitalWrite (MOTOR_POSITIVE_LEFT, LOW);
  digitalWrite (MOTOR_NEGATIVE_LEFT, HIGH);

  //Moving right motor backward
  digitalWrite (MOTOR_POSITIVE_RIGHT, LOW);
  digitalWrite (MOTOR_NEGATIVE_RIGHT, HIGH);
}


void moveLeft()
{
  enableMotors();
  
  //Moving left motor forward
  digitalWrite (MOTOR_POSITIVE_LEFT, HIGH);
  digitalWrite (MOTOR_NEGATIVE_LEFT, LOW);

  //Stopping right motor
  digitalWrite (MOTOR_POSITIVE_RIGHT, LOW);
  digitalWrite (MOTOR_NEGATIVE_RIGHT, LOW);
}

void moveRight()
{
  enableMotors();
  
  //Stopping left motor
  digitalWrite (MOTOR_POSITIVE_LEFT, LOW);
  digitalWrite (MOTOR_NEGATIVE_LEFT, LOW);

  //Moving right motor forward
  digitalWrite (MOTOR_POSITIVE_RIGHT, HIGH);
  digitalWrite (MOTOR_NEGATIVE_RIGHT, LOW); 
}



void stopMotors()
{
  enableMotors();
  
  //Stopping left motor
  digitalWrite (MOTOR_POSITIVE_LEFT, LOW);
  digitalWrite (MOTOR_NEGATIVE_LEFT, LOW);
  
  //Stopping right motor
  digitalWrite (MOTOR_POSITIVE_RIGHT, LOW);
  digitalWrite (MOTOR_NEGATIVE_RIGHT, LOW); 
}
