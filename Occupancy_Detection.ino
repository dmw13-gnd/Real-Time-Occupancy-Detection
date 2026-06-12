#define PIR_PIN 2
#define LED_PIN 13

unsigned long lastMotionTime = 0;
const unsigned long TIMEOUT = 10000;

void setup() {
  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);

  digitalWrite(LED_PIN, LOW);

  Serial.begin(9600);
  Serial.println("Real-Time Occupancy Detection System Started");
}

void loop() {

  bool motionDetected = digitalRead(PIR_PIN);

  if (motionDetected) {
    digitalWrite(LED_PIN, HIGH);
    lastMotionTime = millis();

    Serial.println("Occupancy Detected - Light ON");
  }

  if ((millis() - lastMotionTime) > TIMEOUT) {
    digitalWrite(LED_PIN, LOW);

    Serial.println("No Occupancy - Light OFF");
  }

  delay(100);
}
