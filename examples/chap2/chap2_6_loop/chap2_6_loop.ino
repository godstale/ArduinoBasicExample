void setup() {
  Serial.begin(9600);

  // 배열 초기화
  int evennumber[10];
  for(int i=0; i < 10; i++) {
    evennumber[i] = (i+1)*2;
  }

  // 합 구하기
  int count = 0;
  for(int i=0; i < 10; i++) {
    count = count + evennumber[i];
  }

  // 결과 출력
  Serial.println(count);
}

void loop() {
}

