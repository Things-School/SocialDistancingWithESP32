#include <BLEAdvertisedDevice.h>
#include <BLEDevice.h>
#include <BLEScan.h>


const int PIN = 2;
const int CUTOFF = -55;

void setup() {
  Serial.begin(115200);
  pinMode(PIN, OUTPUT);
  BLEDevice::init("");
}

void loop() {
  BLEScan *scan = BLEDevice::getScan();
  
  scan->setActiveScan(true);
  
  BLEScanResults results = scan->start(1);
  
  int best = CUTOFF;
  
  for (int i = 0; i < results.getCount(); i++) {
    BLEAdvertisedDevice device = results.getDevice(i);
    int rssi = device.getRSSI();
    if (rssi > best) {
      best = rssi;
    }
  }
  
  Serial.println(best);
  digitalWrite(PIN, best > CUTOFF ? LOW : HIGH);
}
