int switchState = 0;

void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);

}

void loop() {
  switchState = digitalRead(2);


  // Pressed button simulates a car arriving at a red light on the other side.
  // The light will turn yellow, then red, then back to green when finished. 
  // Otherwise light will stay green.
  if(switchState == LOW){
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }
  else{

    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    delay(2000);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    delay(4000);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);       
  }
}
