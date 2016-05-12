void setup(){
  Serial.begin(9600);
}

void loop(){
  Serial.print(65);     // "65"
  Serial.print("Hello world.");     // "Hello world."
  Serial.print("\n");   // 줄 넘김

  Serial.println(65);   // "65"
  Serial.println("Hello world.");   // "Hello world."
  Serial.println("");   // 줄 넘김

  Serial.write(65);        // 65 에 해당하는 ASCII 문자 A
  Serial.write("hello");   // "hello"
  Serial.print(" world");      // " world"
  Serial.println();     // 줄 넘김
  Serial.println("==============================");
}

