const int trigPin = 10;    // Trigger pin of ultrasonic sensor
const int echoPin = 9;   // Echo pin of ultrasonic sensor
const int greenLED = 11;   // Green LED pin
const int yellowLED = 12;  // Yellow LED pin
const int redLED = 13;     // Red LED pin
const int threshold1 = 100; // Threshold for the distance to trigger first LED
const int threshold2 = 30; // Threshold for the distance to trigger second LED

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration * 0.034 / 2);

  Serial.print("Distance: ");
  Serial.println(distance);

 if (distance > threshold1) {
    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, LOW);
  } 
  else if (distance <= threshold1 && distance > threshold2) {
    digitalWrite(greenLED,HIGH);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, LOW);
  } 
  else {
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, HIGH);
  }
  delay(100); // Delay for stability
}