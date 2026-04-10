// Helmet Unit Code

const int FSR_PIN = A0;
const int MQ3_PIN = A1;
const int REED_PIN = 2;

void setup() {
  Serial.begin(9600);
  pinMode(REED_PIN, INPUT_PULLUP);
}

void loop() {
  int fsr = analogRead(FSR_PIN);
  int alcohol = analogRead(MQ3_PIN);
  int strap = digitalRead(REED_PIN);

  int helmet = (fsr > 300) ? 1 : 0;
  int strapStatus = (strap == LOW) ? 1 : 0;
  int alcoholStatus = (alcohol > 400) ? 1 : 0;

  Serial.print(helmet);
  Serial.print(",");
  Serial.print(strapStatus);
  Serial.print(",");
  Serial.println(alcoholStatus);

  delay(500);
}