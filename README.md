# Two-Servo Control with Joystick 🎮⚙️

This Arduino project allows you to control **two servo motors** using a **joystick module**. The joystick's X and Y axes determine the positions of the servos, making it ideal for **robotic arms, pan-tilt cameras, and other motion control systems.**  

## 🛠 Features
- **Dual Servo Control** – Moves two servos independently using a joystick.  
- **Analog Mapping** – Converts joystick movement into servo angles (0°-180°).  
- **Easy to Customize** – Modify servo pins, joystick sensitivity, or movement range.  

## 🔧 Hardware Requirements
- 🎮 **Joystick module** (Analog X & Y output)  
- ⚙️ **Two servo motors**  
- 💻 **Arduino board** (e.g., Uno, Mega)  
- 🔌 **Wiring (jumper wires, breadboard, etc.)**  

## 🚀 Wiring Guide
| Joystick Pin | Arduino Pin |
|-------------|------------|
| **VCC**     | 5V         |
| **GND**     | GND        |
| **X-axis**  | A0         |
| **Y-axis**  | A1         |

| Servo | Arduino Pin |
|-------|------------|
| **Servo 1** | D3 |
| **Servo 2** | D5 |

## 📜 Code Overview:

#include <Servo.h>

Servo servo1;
Servo servo2;
int joyX = A0;
int joyY = A1;

void setup() {
    servo1.attach(3);
    servo2.attach(5);
}

void loop() {
    int servoValX = map(analogRead(joyX), 0, 1023, 0, 180);
    int servoValY = map(analogRead(joyY), 0, 1023, 0, 180);

    servo1.write(servoValX);
    servo2.write(servoValY);

    delay(15);  // Smooth movement
}
