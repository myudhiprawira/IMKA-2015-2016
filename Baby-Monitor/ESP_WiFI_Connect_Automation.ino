//Libraries
#include <ESP8266wifi.h>

//Consts and Vars
const char* ssid = "yourAccessPointName";
const char* passwd = "yourAccessPointPassword";

// Macros


// Instances


void setup() {
  
  // Start Serial
  Serial.begin(115200);
  
  // Connect to the Wi-Fi
  WiFi.begin(ssid, passwd);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("Connected");

  // Print the IP Address

  Serial.println(WiFi.localIP());

}

void loop() {
  // put your main code here, to run repeatedly:

}
