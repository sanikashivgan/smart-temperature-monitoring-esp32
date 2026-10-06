#include <DHT.h>

#define DHT_PIN 4
#define DHTTYPE DHT22

#define LED_PIN 2
#define BUZZER_PIN 5

DHT dht(DHT_PIN, DHTTYPE);

const float TEMP_THRESHOLD = 30.0;

void setup() {
    Serial.begin(115200);

    pinMode(LED_PIN, OUTPUT);
    pinMode(BUZZER_PIN, OUTPUT);

    digitalWrite(LED_PIN, LOW);
    noTone(BUZZER_PIN);

    dht.begin();

    Serial.println("Smart Temperature Monitoring System");
    Serial.println("------------------------------------");
}

void loop() {

    float temperature = dht.readTemperature();

    if (isnan(temperature)) {
        Serial.println("Error: Failed to read temperature!");

        digitalWrite(LED_PIN, LOW);
        noTone(BUZZER_PIN);

        delay(2000);
        return;
    }

    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.println(" °C");

    if (temperature > TEMP_THRESHOLD) {

        digitalWrite(LED_PIN, HIGH);
        tone(BUZZER_PIN, 1000);

        Serial.println("WARNING: High Temperature!");

    } else {

        digitalWrite(LED_PIN, LOW);
        noTone(BUZZER_PIN);

        Serial.println("Temperature is Normal.");
    }

    Serial.println("-----------------------------");

    delay(2000);
}