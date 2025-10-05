int gasSensorPin = A0;   // Analog pin connected to MQ2 sensor
int sensorValue = 0;

void setup() {
  Serial.begin(9600);  // Start Serial communication
  pinMode(gasSensorPin, INPUT);
}

void loop() {
  sensorValue = analogRead(gasSensorPin); // Read sensor value
  
  Serial.print("Gas Sensor Value: ");
  Serial.println(sensorValue);

  // Example threshold
  if (sensorValue > 400) {
    Serial.println("⚠ Gas Detected! High concentration!");
  } else {
    Serial.println("Gas level normal.");
  }

  delay(1000); // Wait for 1 second
}