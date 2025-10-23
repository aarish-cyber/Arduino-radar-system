# Arduino Radar System

A complete 180-degree scanning radar system with real-time distance sensing, visual LED feedback, and audio alerts.

## 🎯 Features
- **180° Servo Scanning** - Full sweep with custom calibration
- **Ultrasonic Distance Sensing** - HC-SR04 sensor
- **Visual Alert System** - RGB LED indicators
- **Audio Feedback** - Buzzer with frequency-based warnings
- **Real-time Processing** - Continuous scanning in both directions

## 🛠️ Components
- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- SG90 Servo Motor
- 3x LEDs (Red, Green, Blue)
- Buzzer
- Breadboard & Jumper Wires

## 🚀 How It Works
1. Servo scans 0° to 180° and back
2. Ultrasonic sensor measures distance at each angle
3. LED system provides visual feedback:
   - **Green**: Safe (>40cm)
   - **Red+Green**: Warning (10-40cm) 
   - **Red**: Danger (<10cm)
4. Buzzer provides audio alerts with different frequencies

## 💻 Code Highlights
- Custom servo calibration for precise 180° sweep
- Efficient scanning with minimal delay
- Multi-threshold alert system
- Clean state management for LEDs and buzzer

## 🎓 Skills Demonstrated
- Servo motor control & calibration
- Ultrasonic distance measurement
- Multi-sensor integration
- Real-time alert systems
- Arduino programming & circuit design

## 🔗 Related Projects
- [Reaction Time Game](https://github.com/aarish-cyber/Arduino-Reaction-Game)

---

*Part of my Arduino learning journey - from basic LEDs to complete radar systems!*
