const int pinLedRed = 12;
const int pinLedBlue = 11;
const int pinLedGreen= 10;
const int pinButtonBlue = 7;
const int pinButtonRed = 6;
const int pinButtonGreen = 5;
const int pinButtonReset = 4;
int RedLedPotency = 0;
int BlueLedPotency = 0;
int GreenLedPotency = 0;

void setup() {
  Serial.begin(9600);
  pinMode(pinLedRed, OUTPUT);
  pinMode(pinLedBlue, OUTPUT);
  pinMode(pinLedGreen, OUTPUT);
  pinMode(pinButtonRed, INPUT_PULLUP);
  pinMode(pinButtonBlue, INPUT_PULLUP);
  pinMode(pinButtonGreen, INPUT_PULLUP);
  pinMode(pinButtonReset, INPUT_PULLUP);
}

void loop() {
  int buttonStateRed = digitalRead(pinButtonRed);
  int buttonStateBlue = digitalRead(pinButtonBlue);
  int buttonStateGreen = digitalRead(pinButtonGreen);
  int buttonStateReset = digitalRead(pinButtonReset);
  Serial.print(GreenLedPotency);
  Serial.print(" ");
  Serial.print(RedLedPotency);
  Serial.print(" ");
  Serial.println(BlueLedPotency);
  // Red:
  if(!buttonStateRed == 1){
    RedLedPotency += 1;
  }
  if(RedLedPotency >= 255){
    RedLedPotency = 0;
  }
  // Blue:
  if(!buttonStateBlue == 1){
    BlueLedPotency += 1;
  }
  if(BlueLedPotency >= 255){
    BlueLedPotency = 0;
  }
  // Green:
  if(!buttonStateGreen == 1){
    GreenLedPotency += 1;
  }
  if(GreenLedPotency >= 255){
    GreenLedPotency = 0;
  }

  // Reset:
  if(!buttonStateReset == 1){
    RedLedPotency = 0;
    BlueLedPotency = 0;
    GreenLedPotency = 0;
  }
  
  analogWrite(pinLedRed, RedLedPotency);
  analogWrite(pinLedBlue, BlueLedPotency);
  analogWrite(pinLedGreen, GreenLedPotency);
}
