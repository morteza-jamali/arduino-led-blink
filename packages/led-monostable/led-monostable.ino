const int LED = 13;
const int trig = 7;

boolean trigState;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(trig, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  trigState = digitalRead(trig);
  delay(50);

  if (trigState == LOW) {
    digitalWrite(LED, HIGH);
    delay(1000);
    digitalWrite(LED, LOW);
    delay(1000);
  }
}
