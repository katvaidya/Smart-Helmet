# Smart Helmet System 

An IoT-based Smart Helmet system designed to enhance rider safety by ensuring that the bike starts only when proper safety conditions are met.

---

## Features

- Detects if the helmet is worn using FSR sensor
- Verifies chin strap using magnetic reed switch
- Sends real-time data using Bluetooth (HC-05)
- Controls bike ignition using relay module
- Activates buzzer alert for unsafe conditions
- Prevents bike start if safety conditions are not satisfied

---

## Working Principle

The system consists of two units:

### Helmet Unit (Transmitter)
- Reads data from:
  - FSR sensor (helmet detection)
  - Reed switch (strap verification)
- Sends status via Bluetooth:
  - `"SAFE"` → Helmet worn & strap fastened
  - `"UNSAFE"` → Any condition fails

---

### Bike Unit (Receiver)
- Receives data from helmet unit via Bluetooth
- Performs action based on received message:

| Condition | Action |
|----------|--------|
| SAFE     | Relay ON (Bike starts), Buzzer OFF |
| UNSAFE   | Relay OFF (Bike stops), Buzzer ON |

---

## Components Used

- Arduino Uno (2 units)
- FSR Sensor (Force Sensitive Resistor)
- Magnetic Reed Switch
- HC-05 Bluetooth Module
- Relay Module
- Buzzer
- Connecting Wires
- Power Supply

---

