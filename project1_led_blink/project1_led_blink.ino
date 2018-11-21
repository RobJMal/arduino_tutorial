// Giving pin 9 a name
int led = 9;  

// Runs everytime Arduino is reset
void setup() {
  // Set voltage flow to that pin 
  pinMode(led, OUTPUT);       
}

void loop() {
  // Turn "on" LED
  digitalWrite(led, HIGH);  
    
  // Make it on for 1 second
  delay(1000);                

  // Turn "off" LED
  digitalWrite(led, LOW);     

  // Make it off for 1 second
  delay(1000);                
}

