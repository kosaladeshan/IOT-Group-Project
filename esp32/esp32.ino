#include<WiFi.h>
#include<HTTPClient.h>

#define RXp2 16
#define TXp2 17

// Function prototype
void connectWiFi();

String URL = "https://supermarketwebsite528.000webhostapp.com/index.php?api_key=587698715";
const char* ssid = "Nokia 5.4";
const char* password = "0718830879";
  // Replace with actual distance value

void setup() {
  Serial.begin(115200);
  connectWiFi();
  Serial2.begin(9600, SERIAL_8N1, RXp2, TXp2);
}

void loop() {
  if (WiFi.status() != WL_CONNECTED) {
    // Handle case when not connected to WiFi
    Serial.println("WiFi not connected. Reconnecting...");
    connectWiFi();
  } else {
     if (Serial2.available() > 0) {
      // Read weight and distance from serial monitor
      float weight = Serial2.parseFloat();
      float distance = Serial2.parseFloat();
      
      if (isnan(weight) || isnan(distance)) {
        Serial.println("Invalid input from Serial Monitor.");
        return;
  }

   // Construct the dynamic URL
      String dynamicURL = URL + "&weight=" + float(weight) + "&distance=" + float(distance);

      HTTPClient http;
      http.begin(dynamicURL);
      http.addHeader("Content-Type", "application/x-www-form-urlencoded");

      Serial.print("URL: "); Serial.println(dynamicURL);

      int httpCode = http.GET();
      if (httpCode > 0) {
        String payload = http.getString();
        Serial.print("HTTP Code: "); Serial.println(httpCode);
        Serial.print("Payload: "); Serial.println(payload);
      } else {
        Serial.print("HTTP Code: "); Serial.println(httpCode);
        Serial.println("Error in HTTP request");
      }

      Serial.println("--------------------------");
      http.end();
    }
  }

  delay(10000); // Adjust the delay based on your needs
}

void connectWiFi() {
  WiFi.mode(WIFI_OFF);
  delay(10000);
  // This line hides the viewing of ESP as a wifi hotspot
  WiFi.mode(WIFI_STA);

  WiFi.begin(ssid, password);
  Serial.println("Connecting to WiFi");

  while (WiFi.status() != WL_CONNECTED) {
    delay(5000);
    Serial.println("Attempting to connect...");
  }

  Serial.print("Connected to: "); Serial.println(ssid);
  Serial.print("IP address: "); Serial.println(WiFi.localIP());
}
