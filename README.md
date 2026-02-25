# gas-detection-system
This project is an Arduino-based gas leakage and smoke detection system designed and simulated in Tinkercad.

The MQ-2 gas sensor detects the presence of gas or smoke and sends a signal to the Arduino Uno. When gas is detected, the Arduino activates multiple safety responses:

The LCD displays “Gas Detected” and “Evacuate” warning messages.

The buzzer sounds an alarm to alert nearby people.

A red LED turns ON as a visual warning indicator.

A servo motor rotates to simulate opening a window or door for ventilation.

When no gas or smoke is detected:

The LCD displays “Safe” and “All Clear” messages.

The buzzer remains OFF.

The green LED indicates normal safe conditions.

The servo motor remains stationary.


