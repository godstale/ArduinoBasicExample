int ledPin = 13;     // LED 핀
int inputPin = 2;    // PIR sensor 핀
int pirState = LOW;  // PIR sensor의 이전 상태

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(inputPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int motion = digitalRead(inputPin);  // 모션 탐지 결과 읽기
  digitalWrite(ledPin, motion);        // LED 업데이트
  
  if(pirState == LOW && motion == HIGH) {
    Serial.println("Motion detected!");
  }
  pirState = motion;
  delay(10);
}
