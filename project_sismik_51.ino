const int vehGreen = 10;
const int vehYellow = 9;
const int vehRed = 8;

const int pedGreen = 3;
const int pedRed = 2;

const int buttonPin = 7;

unsigned long lastDebounceTime = 0;
const unsigned long debounceDelay = 200; 

void setup() {
  pinMode(vehGreen, OUTPUT);
  pinMode(vehYellow, OUTPUT);
  pinMode(vehRed, OUTPUT);
  pinMode(pedGreen, OUTPUT);
  pinMode(pedRed, OUTPUT);
  
  pinMode(buttonPin, INPUT_PULLUP);

  digitalWrite(vehGreen, HIGH);
  digitalWrite(vehYellow, LOW);
  digitalWrite(vehRed, LOW);
  digitalWrite(pedGreen, LOW);
  digitalWrite(pedRed, HIGH);
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {
    if ((millis() - lastDebounceTime) > debounceDelay) {
      siklusAman();
      lastDebounceTime = millis();
    }
  }
}

void siklusAman() {
  digitalWrite(vehGreen, LOW);
  for (int i = 0; i < 3; i++) {
    digitalWrite(vehYellow, HIGH);
    delay(300);
    digitalWrite(vehYellow, LOW);
    delay(300);
  }

  digitalWrite(vehRed, HIGH);   
  digitalWrite(pedRed, LOW);    
  digitalWrite(pedGreen, HIGH); 
  delay(5000);                 

  digitalWrite(pedGreen, LOW); 
  digitalWrite(pedRed, HIGH);   

  delay(500);                   

  digitalWrite(vehRed, LOW);    
  digitalWrite(vehGreen, HIGH); 
}