void setup() {
  Serial.begin(9600);
    
  boolean isClick = true;  // isClick 변수를 만들면서 참(true, 1)으로 기록
  Serial.println(isClick);
  isClick = false;    // isClick 값이 거짓(false, 0)으로 바뀝니다.
  Serial.println(isClick);

  char oneChar = 'A';  // oneChar 변수에는 A 문자를 나타내는 값이 저장됩니다.
  Serial.println(oneChar);
  oneChar = 65;   // ‘A’ 와 같은 표현입니다. 대신 ASCII 코드를 사용했습니다.
  Serial.println(oneChar);
  
  int ivalue;   // ivalue 정수형 변수를 생성만 합니다. 값을 지정하지 않아서
                // 아직은 사용할 수 없습니다.
  ivalue = 738 + 22;  // ivalue 변수에는 760 이 저장됩니다.
  Serial.println(ivalue);
  
  float fvalue = 0.23;  // fvalue 실수형 변수를 만들면서 0.23 을 저장합니다.
  Serial.println(fvalue);
  fvalue = fvalue + 1.1;  // fvalue 값에 1.1 을 더한 뒤 다시 fvalue 값으로 저장합니다.
  Serial.println(fvalue);
}

void loop() {
}
