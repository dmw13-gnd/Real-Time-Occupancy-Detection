// Real-Time Occupancy Detection System for Energy Efficiency

#define PIR_PIN 2
#define LED_PIN 13

unsigned long lastMotionTime = 0;
const unsigned long TIMEOUT = 10000; // 10 seconds

void setup() {
  // Configure input and output pins
  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);

  // Initially turn OFF LED
  digitalWrite(LED_PIN, LOW);

  // Start Serial Monitor
  Serial.begin(9600);
  Serial.println("Occupancy Detection System Started");
}

void loop() {

  // Read PIR sensor status
  bool motionDetected = digitalRead(PIR_PIN);

  // If motion is detected
  if (motionDetected) {
    digitalWrite(LED_PIN, HIGH);
    lastMotionTime = millis();

    Serial.println("Occupancy Detected - Light ON");
  }

  // Turn OFF LED after 10 seconds of inactivity
  if ((millis() - lastMotionTime) > TIMEOUT) {
    digitalWrite(LED_PIN, LOW);

    Serial.println("No Occupancy - Light OFF");
  }

  // Small delay for stability
  delay(100);
}
