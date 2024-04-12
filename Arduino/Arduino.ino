#include <HX711_ADC.h>
#include <Wire.h>


HX711_ADC LoadCell(4, 5);
const int trigPin = 2;    // HC-SR04 Trigger pin
const int echoPin = 3;    // HC-SR04 Echo pin
const int ledPin9 =  9;
const int ledPin10 =  10;
const int ledPin11 =  11;
const int ledPin12 =  12;

unsigned long lastDistanceTime = 0;

void setup() {
Serial.begin(9600);

  LoadCell.begin();
  LoadCell.start(2000);
  LoadCell.setCalFactor(1000.0);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin9, OUTPUT);
  pinMode(ledPin10, OUTPUT);
  pinMode(ledPin11, OUTPUT);
  pinMode(ledPin12, OUTPUT);

}

void readDistance() {

  // Get the average of multiple samples
   
  delay(1000);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the echo duration in microseconds
  long duration = pulseIn(echoPin, HIGH);

  // Convert the duration to distance in centimeters
  float distance_cm = duration * 0.0343 / 2;

  // Turn on the appropriate LED based on the distance
   int distance_cm_int = static_cast<int>(distance_cm);
switch (distance_cm_int) {
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
        digitalWrite(ledPin12, HIGH);
        digitalWrite(ledPin11, LOW);
        digitalWrite(ledPin10, LOW);
        digitalWrite(ledPin9, LOW);
        break;

    case 8:
    case 9:    
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
        digitalWrite(ledPin11, HIGH);
        digitalWrite(ledPin10, LOW);
        digitalWrite(ledPin9, LOW);
        digitalWrite(ledPin12, LOW);
        break;
    case 15:
    case 16:    
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
        digitalWrite(ledPin10, HIGH);
        digitalWrite(ledPin9, LOW);
        digitalWrite(ledPin12, LOW);
        digitalWrite(ledPin11, LOW);
        break;
   
    case 22:
    case 23:
        digitalWrite(ledPin9, HIGH);
        digitalWrite(ledPin12, LOW);
        digitalWrite(ledPin11, LOW);
        digitalWrite(ledPin10, LOW);
        break;
    default:
        digitalWrite(ledPin12, LOW);
        digitalWrite(ledPin11, LOW);
        digitalWrite(ledPin10, LOW);
        digitalWrite(ledPin9, LOW);
        break;
}     

  // Print the distance to the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance_cm);
  Serial.println(" cm");
}



void loop() {
 

 LoadCell.update();
  float weightKilograms = LoadCell.getData() / 1000.0;

  // Display on Serial Monitor in kilograms
  Serial.print("Weight[kg]: ");
  Serial.println(weightKilograms);

  delay(1000); // Delay for readability



  // Read distance 
  if (millis() - lastDistanceTime >= 1000) {
    lastDistanceTime = millis();
    readDistance();
  }
}
