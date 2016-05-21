#include "MQ135.h"

MQ135 gasSensor = MQ135(A0);

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Read out the calibration value with below code
  //float rzero = gasSensor.getRZero();
  
  float ppm = gasSensor.getPPM();  // 센서 값 측정 및 농도 변환
  Serial.print("CO2(ppm) = ");
  Serial.println(ppm);
  
  delay(350);
}
