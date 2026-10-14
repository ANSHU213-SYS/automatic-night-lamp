Automatic Night Lamp Using Arduino and LDR

1. Project Overview

This is my first-year B.Tech ECE beginner project. It uses an Arduino Uno and an LDR (photoresistor) sensor to control an LED automatically based on the surrounding light level.

2. Objective

To understand basic electronics, sensor interfacing, Arduino programming, and simple automation.

3. Components Used

- Arduino Uno
- LDR (photoresistor) sensor module
- Built-in Arduino LED
- Wokwi online simulator

4. Circuit Connections

LDR Sensor Pin| Arduino Pin
VCC| 5V
GND| GND
AO| A0

The built-in LED is controlled through digital pin 13.

5. Working Principle

The LDR sensor provides a reading based on the surrounding light level. The Arduino compares this reading with a threshold value of 600.

- Reading above 600: LED ON
- Reading of 600 or below: LED OFF

The threshold may need adjustment depending on the sensor settings.

6. Programming Language

Arduino C++

7. Simulation

Built and tested using Wokwi.

Project link: https://wokwi.com/projects/477863286070697985

8. What I Learned

- Basic Arduino programming
- Analog sensor readings
- Digital output control
- If-else conditions
- Circuit simulation and debugging

9. Future Improvements

- Add a separate external LED as the lamp.
- Improve the threshold settings.
- Add a display for the sensor readings.
- Build the circuit physically when components are available.

Author

First-year B.Tech ECE student learning electronics and programming.
