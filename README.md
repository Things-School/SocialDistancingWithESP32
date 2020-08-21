# SocialDistancingWithESP32

1. Upload the `iBeacon_Receiver.ino` to another ESP32 board

2. Once uploaded, open the Serial Monitor and check if it detects closeby active bluetooth devices (The RSSI will keep increasing as you get the active bluetooth device closer to ESP32, else it will just print the CUTOFF value in the code)

3. Upload the `iBeacon_Transmitter.ino` code to an ESP32 board using Arduino IDE

4. Open the serial monitor and reset the ESP32 to check if the beacon gets started and eventually goes to deep sleep mode

5. Once steps 2 and 4 are verified, power up both the devices and see the LED turning on when the devices are closer to each other and the LED turned off when they are apart

6. Play with the CUTOFF value in Receiver code to set the distance accordingly

7. Attach a buzzer to the ESP32 Receiver on a GPIO of your choice and make changes to the Receiver code accordingly, then upload the same to the ESP32 Receiver

8. Now, in addition to the LED turning on and off, you should also see the buzzer work

-----

1. Modify the codes in a way such that the Transmission and Reception in each ESP32 happens alternatively, so when the ESP32 Device 1 transmits, ESP32 Device 2 listens and turns on an LED / beeps the buzzer and vice versa
