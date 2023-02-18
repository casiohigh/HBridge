#define pin9 9
#define pin10 10

void setup() {
  Serial.begin(9600);
  
  pinMode(pin10, OUTPUT);    
  pinMode(pin9, OUTPUT);     
}

char message = 'left';

void direction(char message){
  if (message == 'left'){
    digitalWrite(pin10, HIGH);   
    digitalWrite(pin9, LOW);
  }
  else if (message == 'right'){
    digitalWrite(pin10, LOW);    
    digitalWrite(pin9, HIGH);   
  }
}

void loop() {
  
  // if (Serial.available() > 0) {   
  message = Serial.read();
  direction(message);
  // }
  
     
         
}
