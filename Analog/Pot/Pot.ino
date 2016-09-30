const int LED = 11;
const int POT = A0;

int LED2;

void setup() {
  Serial.begin(9600);

  pinMode(LED, OUTPUT);
}

void loop() {
  LED2 = analogRead(POT) / 4;
  if(LED2 <=20){
    LED2=0;
  }
  analogWrite(LED,LED2);
}
