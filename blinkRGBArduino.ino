int green = 7;
int red = 6;
int blue = 5;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
  analogWrite(red, 237);
  analogWrite(green, 21);
  analogWrite(blue, 220);
  delay(500);
  analogWrite(red, 123);
  analogWrite(green, 238);
  analogWrite(blue, 241);
  delay(500);
  analogWrite(red, 234);
  analogWrite(green, 150);
  analogWrite(blue, 42);
  delay(500);
  
  
}

/*
 * 123, 238, 241
 * 234, 150, 42
 */
