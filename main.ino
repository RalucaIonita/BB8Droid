#include "MotorFunctions.hpp"
#include "MMP3Functions.hpp"
#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"

SoftwareSerial mySoftwareSerial(RX_SERIAL, TX_SERIAL);
DFRobotDFPlayerMini myDFPlayer;

char command;

void setup()
{

 mySoftwareSerial.begin(9600);
  
  Serial.begin (9600);
  
  //configure pin modes
  pinMode (ENABLE_LEFT, OUTPUT);
  pinMode (MOTOR_POSITIVE_LEFT, OUTPUT);
  pinMode (MOTOR_NEGATIVE_LEFT, OUTPUT);  
  
  pinMode (ENABLE_RIGHT, OUTPUT);
  pinMode (MOTOR_POSITIVE_RIGHT, OUTPUT);
  pinMode (MOTOR_NEGATIVE_RIGHT, OUTPUT);  

  //Checking for available mp3
  if (!myDFPlayer.begin(mySoftwareSerial))
  {
    //Use softwareSerial to communicate with mp3.
    Serial.println(F("Unable to begin:"));
    Serial.println(F("1.Please recheck the connection!"));
    Serial.println(F("2.Please insert the SD card!"));
    while(true);
  }
  
  Serial.println(F("DFPlayer Mini online."));

  //Set mp3 player's volume
  myDFPlayer.volume(MP3_MAX_VOLUME);

  //Play a sound when booting
  playRandomSound();
  
}
 
void loop()
{
  //Reading the command
  if(Serial.available() > 0)
  {
    command = Serial.read();
    Serial.print(command);
  }

  //Actioning according to the received command
  
  if(command == 'F')
  {
    moveForward();
  }

  if(command == 'B')
  {
    moveBackward();
  }

  if(command == 'L')
  {
    moveLeft();
  }

  if(command == 'R')
  {
    moveRight();
  }

  if(command == 'S')
  {
    stopMotors();
  }

  if(command == '1')
  {
    playRandomSound();
  }

  if(command == '2')
  {
    playSoundtrack();
  }
}
