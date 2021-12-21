//For first PWM pin
int frequency = 5000; // ON OFF timing of cycle
int ledchannel = 0;   // Choose one of the 16 channels available
int resolution = 8;  // we can choose upto 16 bit resolution

//For second PWM pin
//  int frequency1 = 10
//  int ledchannel1 = 1;
//  int resolution1 = 8;

void setup() {

  ledcSetup(ledchannel, frequency, resolution); // setup part for PWM
  // ledcSetup(ledchannel1, frequency1, resolution1);

  ledcAttachPin(15, ledchannel); // attaching channel to LED pin
  // ledcAttachPin(16, ledchannel1);

}

void loop() {

  //as it is 8 bit the values will goto 255 (2^8 - 1)
  for (int i = 0; i <= 255; i++) // Increasing Brightness
  {
    ledcWrite(ledchannel, i);
    delay(20);
  }

  for (int i = 255; i >= 0; i--) // Decreasing Brightness
  {
    ledcWrite(ledchannel, i);
    delay(20);
  }

  /*
    for (int j = 0; j <= 255; j++) // Increasing Brightness
    {
      ledcWrite(ledchannel1, j);
      delay(20);
    }

    for (int j = 255; j >= 0; j--) // Decreasing Brightness
    {
      ledcWrite(ledchannel1, j);
      delay(20);
    }
  */

}
