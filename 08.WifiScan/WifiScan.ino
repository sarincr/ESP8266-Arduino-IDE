#include "ESP8266WiFi.h"

void setup() 
{
  Serial.begin(115200);
  WiFi.mode(WIFI_STA); //STA mode allows the ESP8266 to connect to a Wi-Fi network (one created by your wireless router)
  WiFi.disconnect(); 
  delay(100);

  Serial.println("Setup done");
}

void loop() 
{
  int n = WiFi.scanNetworks(); //Scanning available network
  if (n == 0) 
  {
    Serial.println("no networks found");  // If n is zero, no wifi network available
  } 
  else 
  {
    Serial.print(n);  //Number of wifi network 
    Serial.println(" networks found");
    for (int i = 0; i < n; ++i) 
    {
      Serial.print(i + 1); 
      Serial.print(": ");
      Serial.print(WiFi.SSID(i));  //printing SSID
      Serial.print(" (");
      Serial.print(WiFi.RSSI(i)); //RSS
      Serial.print(")");
      Serial.println((WiFi.encryptionType(i) == ENC_TYPE_NONE) ? " " : "*"); 
      delay(10);
    }
  }
  Serial.println("");
  delay(5000);
}
