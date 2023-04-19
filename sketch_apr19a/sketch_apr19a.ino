const int sensorPin = A0;
const float baselineTemp = 20.0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for (int pinNumber = 2; pinNumber < 5; pinNumber++) {
    pinMode(pinNumber, OUTPUT);
    digitalWrite(pinNumber, LOW);
  }
}

void loop() {
  int sensorVal = analog

}
