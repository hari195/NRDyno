void setup() {
  Serial.begin(115200);
  attachInterrupt(0,alert,RISING); 
  
}

void loop() {
}
void alert(){
  Serial.print(micros());
  }
