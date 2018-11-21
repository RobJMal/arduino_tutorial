const int LED = 9;
const int BUTTON = 2; 

boolean prev_state = LOW;
boolean curr_state = LOW; 
boolean ledOn = false; 

void setup() 
{
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

bool debounce(boolean last) 
{
  boolean current = digitalRead(BUTTON); 
  if (last != current) 
  {
    delay(5);
    current = digitalRead(BUTTON); 
  }
  return current; 
}

void loop() 
{
  curr_state = debounce(prev_state); 
  if (prev_state == LOW && curr_state == HIGH) 
  {
    ledOn = !ledOn; 
  }
  prev_state = curr_state; 
  digitalWrite(LED, ledOn); 
}
