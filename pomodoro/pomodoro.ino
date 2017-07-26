// set pins for buzzer
#define BUZZER 8
#define CONTINUE_BUTTON 9

int buttonContinueState = 0;
int produceSound = 0;

void setup(){
 
  pinMode(BUZZER, OUTPUT); // Set buzzer - pin 9 as an output
  pinMode(CONTINUE_BUTTON, INPUT);

}

void loop(){

  // read button state
  buttonContinueState = digitalRead(CONTINUE_BUTTON);

  if (buttonContinueState == HIGH) {
        // produce sound:    
        produceSound = 1;
    }
    else {
        // turn off sound
        produceSound = 0;
    }

  // ring the buzzer if needed
  if (produceSound) {
      tone(BUZZER, 1000);  
  } else {
      noTone(BUZZER);
  }
 }
