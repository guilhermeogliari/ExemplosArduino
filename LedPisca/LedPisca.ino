const int LED = 3;

void setup() {
  pinMode(LED,OUTPUT);
}

void loop() {
  for(int x = 0 ; x<15; x++){
    digitalWrite(LED,HIGH);
    delay(1000);
    digitalWrite(LED,LOW);
    delay(1000);  
  }
  delay(10000);
}
