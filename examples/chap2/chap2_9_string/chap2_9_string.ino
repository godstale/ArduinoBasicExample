void setup() {
  Serial.begin(9600);

  String string1 = "Hello";
  Serial.println(string1);
  string1 += "World";  // 1. 문자 하나를 문자열로 변환
  Serial.println(string1);
  string1 += 123;   // 2. 문자열에 “123” 문자열을 붙임
  Serial.println(string1);
  string1 += 'A';   // 3. 문자열에 문자 하나를 붙임
  Serial.println(string1);
  string1.toUpperCase();  // 4. 문자열을 전체를 대문자로 바꿈
  Serial.println(string1);
  string1.toLowerCase();  // 5. 문자열을 전체를 소문자로 바꿈
  Serial.println(string1);
  Serial.println("");
  
  int firstPosition = string1.indexOf('l'); // 6. 특정 문자가 처음 등장하는 위치를 찾음
  Serial.print("first position = ");
  Serial.println(firstPosition);
  int lastPosition = string1.lastIndexOf('l'); // 7. 특정 문자가 마지막 등장하는 위치를 찾음
  Serial.print("last position = ");
  Serial.println(lastPosition);
  Serial.println("");
  
  int aPosition = string1.indexOf('A');
  string1.setCharAt(aPosition, '4');  // 8. 특정 위치의 문자를 바꿈
  Serial.println(string1);
  string1.replace("world", "arduino");  // 9. 문자열을 찾아서 교체
  Serial.println(string1);
  string1.replace('l', 'L');      // 10. 특정 문자를 찾아서 모두 교체
  Serial.println(string1);
  int length = string1.length();  // 11. 문자열의 현재 길이를 알려줌
  Serial.print("length = ");
  Serial.println(length);
  Serial.println("");
}

void loop() {
}

