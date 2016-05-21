void setup() {
  // put your setup code here, to run once:
  pinMode(6, INPUT_PULLUP);    // 버튼 핀을 읽기 모드로
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int vertical, horizontal, select;
  vertical = analogRead(A0);   // x축 = 0-1023
  horizontal = analogRead(A1); // y축 = 0-1023
  select = digitalRead(6);     // 버튼, 눌렀을 때 = LOW, 뗐을 때 = HIGH
  
  Serial.print("X = ");
  Serial.print(vertical);
  Serial.print(", Y = ");
  Serial.print(horizontal);
  Serial.print(", Button = ");
  
  if(select == HIGH) {
    Serial.println("not pressed");
  } else {
    Serial.println("PRESSED!");
  }
  delay(200);
}
