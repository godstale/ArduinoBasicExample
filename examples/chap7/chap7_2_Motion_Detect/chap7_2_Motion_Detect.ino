int ledPin = 13;     // LED 핀
int inputPin = 2;    // PIR sensor 핀

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(inputPin, INPUT);
}

void loop() {
  int motion = digitalRead(inputPin);  // 모션 탐지 결과 읽기
  digitalWrite(ledPin, motion);        // LED 업데이트
  delay(10);
}
