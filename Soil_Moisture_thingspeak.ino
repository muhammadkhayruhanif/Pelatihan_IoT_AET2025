#include <ESP8266WiFi.h>
#include <DHT.h>
#include <ThingSpeak.h>
// WiFi dan ThingSpeak
const char* ssid = "Nama_WiFi"; // Ganti dengan SSID WiFi Anda
const char* password = "Pw_WiFi"; // Ganti dengan password WiFi
const char* writeAPIKey = "APIKEY_THINGSPEAK"; // API Key dari ThingSpeak
WiFiClient client;
// Pin dan sensor
#define DHTPIN D2
#define DHTTYPE DHT11
#define RELAY_PIN D1
#define SOIL_PIN A0
DHT dht(DHTPIN, DHTTYPE);
void setup() {
Serial.begin(9600);
dht.begin();
pinMode(RELAY_PIN, OUTPUT);
digitalWrite(RELAY_PIN, LOW);
WiFi.begin(ssid, password);
Serial.print("Menghubungkan ke WiFi");
while (WiFi.status() != WL_CONNECTED) {
delay(1000);
Serial.print(".");
}
Serial.println("\nWiFi Terhubung");
ThingSpeak.begin(client);
}
void loop() {
float temperature = dht.readTemperature();
float humidity = dht.readHumidity();
int soilRaw = analogRead(SOIL_PIN);
float soilMoisture = map(soilRaw, 1023, 0, 0, 100);
Serial.println("Mengirim data ke ThingSpeak...");
ThingSpeak.setField(1, temperature);
ThingSpeak.setField(2, humidity);
ThingSpeak.setField(3, soilMoisture);
int response = ThingSpeak.writeFields(ID,"Write API");
if (response == 200) {
Serial.println("Update Berhasil");
} else {
Serial.print("Gagal, kode: ");
Serial.println(response);
}
// Kendali relay
if (temperature > 30 || soilMoisture < 40) {
digitalWrite(RELAY_PIN, HIGH);
Serial.println("Relay: AKTIF");
} else {
digitalWrite(RELAY_PIN, LOW);
Serial.println("Relay: NONAKTIF");
}
delay(5000); // Delay 20 detik (minimal 15 detik untuk ThingSpeak)
}
