#include <ESP8266WiFi.h>
#include <ESP8266Ping.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

#define OLED_RESET -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

const char* ssid = "Your_SSID";
const char* password = "Your_PASSWORD";

const char* testHost = "8.8.8.8"; // Google DNS for testing
const int testCount = 5;

void setup() {
  Serial.begin(115200);

  // Initialize OLED display
  if (!display.begin(SSD1306_I2C_ADDRESS, OLED_RESET)) {
    Serial.println("OLED allocation failed");
    for (;;);
  }
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.println("Connecting to WiFi...");
  display.display();

  // Connect to WiFi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
  }
  Serial.println("\nWiFi connected!");
  display.println("WiFi connected!");
  display.display();
}

void loop() {
  // Test network with ping
  display.clearDisplay();
  display.setCursor(0, 0);
  display.println("Pinging...");
  display.display();

  if (Ping.ping(testHost, testCount)) {
    float avgTime = Ping.averageTime();
    Serial.printf("Ping success: Avg Time = %.2f ms\n", avgTime);

    display.println("Ping Success");
    display.printf("Avg Time:
