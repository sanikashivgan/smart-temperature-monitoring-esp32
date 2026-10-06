# Smart Temperature Monitoring and Alert System Using ESP32

## Embedded Systems Task-1

This project implements a smart temperature monitoring and alert system using an ESP32 microcontroller and DHT22 temperature sensor.

## Objective

The system continuously monitors temperature and activates an LED and buzzer when the temperature exceeds 30°C.

## Components

- ESP32 DevKit
- DHT22 Temperature Sensor
- LED
- 220 Ω Resistor
- Piezoelectric Buzzer
- Breadboard
- Jumper Wires

## Pin Connections

| Component | ESP32 Pin |
|---|---|
| DHT22 DATA | GPIO 4 |
| DHT22 VCC | 3.3V |
| DHT22 GND | GND |
| LED | GPIO 2 |
| Buzzer | GPIO 5 |

## Working

The DHT22 measures the surrounding temperature and sends the value to the ESP32.

The ESP32 compares the temperature with a threshold of 30°C.

### Normal Condition

Temperature ≤ 30°C

- LED OFF
- Buzzer OFF

### Alert Condition

Temperature > 30°C

- LED ON
- Buzzer ON
- Warning displayed on Serial Monitor

## Simulation

The project is simulated using Wokwi.

## Files

- `sketch.ino` — ESP32 source code
- `diagram.json` — Wokwi simulation configuration
- `circuit-diagram.png` — Circuit diagram
- `Task-1-Report.pdf` — Project report
