unsigned long previousTime = 0;   // LED 상태를 변경한 시간
boolean isOn = false;       // LED 상태

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
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

  int button = digitalRead(3);
  digitalWrite(2, button);
  delay(10);
}
