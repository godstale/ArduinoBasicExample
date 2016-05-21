int ledPin = 13;     // LED 핀
int inputPin = 2;    // PIR sensor 핀

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(inputPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int motion = digitalRead(inputPin);  // 모션 탐지 결과 읽기
  digitalWrite(ledPin, motion);        // LED 업데이트
  delay(10);
}
