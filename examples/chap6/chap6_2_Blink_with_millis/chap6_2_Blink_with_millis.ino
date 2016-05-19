unsigned long previousTime = 0;   // LED 상태를 변경한 시간
boolean isOn = false;              // LED 상태

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long currentTime = millis();

  // 현재 시간이 지난 번 변경 시간 + 1초 보다 클 때
  if( currentTime > previousTime + 1000 ) {
    // LED 제어
    if(isOn) {
      digitalWrite(13, HIGH);
    } else {
      digitalWrite(13, LOW);
    }
    isOn = !isOn;   // LED 상태 변경
    previousTime = currentTime; // 변경 시간 변경
  }
}
