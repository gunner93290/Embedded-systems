int sensorPin = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int reading = analogRead(sensorPin);
  float voltage = reading * 5.0;
  voltage /= 1024.0;
  Serial.print(voltage); Serial.println(" volts");
  float temperatureC = (voltage - 0.5) * 100;
  Serial.print(temperatureC); Serial.println(" degrees C");
  delay(1000);
}
