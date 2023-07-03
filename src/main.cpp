#include <sdkconfig.h>
#include <Arduino.h>

void setup() {
    vTaskDelay(5000);
    Serial.begin(115200);
    Serial.print("A\n\n");
    Serial.println("----------------------------------");
    uint8_t avMajor  = ESP_ARDUINO_VERSION_MAJOR;
    uint8_t avMinor  = ESP_ARDUINO_VERSION_MINOR;
    uint8_t avPatch  = ESP_ARDUINO_VERSION_PATCH;
    Serial.printf("ESP32 Chip: %s\n", ESP.getChipModel());
    Serial.printf("Arduino Version: %d.%d.%d\n", avMajor, avMinor, avPatch);
    uint8_t idfMajor = ESP_IDF_VERSION_MAJOR;
    uint8_t idfMinor = ESP_IDF_VERSION_MINOR;
    uint8_t idfPatch = ESP_IDF_VERSION_PATCH;
    Serial.printf("ESP-IDF Version: %d.%d.%d\n", idfMajor, idfMinor, idfPatch);
    Serial.printf("ARDUINO_LOOP_STACK_SIZE %d words (32 bit)\n", CONFIG_ARDUINO_LOOP_STACK_SIZE);
    Serial.println("----------------------------------");
    Serial.print("\n\n");
    disableCore1WDT();
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("I'm in loop");
  vTaskDelay(5000);
}