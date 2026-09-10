// CodeAlpha Task 2
// Automatic Street Light using LDR Sensor

const int ldrPin = A0;
const int ledPin = 9;

int ldrValue = 0;
int threshold = 500;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Read LDR sensor value
  ldrValue = analogRead(ldrPin);

  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

  // Dark condition
  if (ldrValue < threshold) {
    digitalWrite(ledPin, HIGH);  // LED ON
  }
  else {
    digitalWrite(ledPin, LOW);   // LED OFF
  }

  delay(500);
}