#define MAX_MP3_VOLUME 30
#define RX_SERIAL 12
#define TX_SERIAL 11

#define MP3_MAX_VOLUME 30

#define NUMBER_OF_SOUNDS 15
#define SOUNDTRACK_NUMBER 16




void playRandomSound()
{
    int randomNumber = rand() % NUMBER_OF_SOUNDS;
    myDFPlayer.play(randomNumber);
}


void playSoundtrack()
{
  myDFPlayer.play(SOUNDTRACK_NUMBER);
}
