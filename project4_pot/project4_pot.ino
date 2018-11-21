const int POT = 0;  // Pot in analog in pin 0
int val = 0;        // holds analog reading fro POT

void setup() {
  Serial.begin(9600); 
}

void loop() {
  val = analogRead(POT);
  Serial.println(val);      // prints values of reading 
  
  delay(500); 
}
