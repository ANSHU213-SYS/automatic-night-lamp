const int LDR_PIN = A0;
const int LED_PIN = 13;

const int DARK_THRESHOLD = 600;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int lightValue = analogRead(LDR_PIN);

  Serial.print("Light value: ");
  Serial.println(lightValue);

  if (lightValue > DARK_THRESHOLD) {
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }

  delay(500);
}
