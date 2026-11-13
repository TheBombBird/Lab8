int probePin = 2;   
int ledPin = 13;    

void setup() {
  pinMode(probePin, INPUT_PULLUP); 
  pinMode(ledPin, OUTPUT);         
  digitalWrite(ledPin, LOW);     
}

void loop() {
  
  if (digitalRead(probePin) == HIGH) {
    digitalWrite(ledPin, LOW);    
  } else {
    digitalWrite(ledPin, HIGH);    
  }
}

