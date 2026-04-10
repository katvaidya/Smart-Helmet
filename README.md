# Smart Helmet System 🪖

An IoT-based safety system that ensures helmet usage, strap fastening, and alcohol detection before allowing bike ignition.

---

## Features
- Helmet detection using FSR sensor
- Strap verification using reed switch
- Alcohol detection using MQ-3 sensor
- Bike ignition control using relay
- Buzzer alert system
- Bluetooth communication using HC-05

---

## Working

The helmet unit checks:
- Helmet is worn
- Strap is fastened
- Alcohol is detected or not

This data is sent to the bike unit using Bluetooth.

The bike starts only if:
Helmet = YES  
Strap = YES  
Alcohol = NO  

---

## Project Structure

Smart-Helmet/
│
├── Helmet_unit/
│   └── Helmet_unit.ino
│
├── Bike_unit/
│   └── Bike_unit.ino
│
├── README.md

---

## Author
Kasturi Vaidya