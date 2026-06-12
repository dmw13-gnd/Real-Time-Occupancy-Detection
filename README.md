# Real-Time-Occupancy-Detection
### Problem Statement

Develop a real-time occupancy detection system that automatically controls lighting based on human presence to improve energy efficiency.

### **Scope of the Solution**

The system detects motion using a PIR sensor.
- Light turns ON when occupancy is detected.
- Light turns OFF after 10 seconds of inactivity.
- Reduces unnecessary power consumption.
- Can be extended for classrooms, offices, and smart homes.

### **Components Required**

**Hardware**

- Arduino Uno
- PIR Motion Sensor (HC-SR501)
- LED
- 220Ω Resistor
- Breadboard
- Jumper Wires

**Software**

- Arduino IDE
- Cirkit Designer

## Circuit Diagram

![Circuit Diagram](circuit_design.png)

## Circuit Simulation Link

[View Cirkit Designer Simulation](https://app.cirkitdesigner.com/project/fc8c1c20-c3ee-4f36-a7d3-30ea475516cd)

## Arduino Code

[View Arduino Source Code](Occupancy_Detection.ino)
