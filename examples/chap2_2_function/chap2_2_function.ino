void setup() {
  Serial.begin(9600);
  delay(3000);
  
  int sum;
  sum = add(1, 2);
  Serial.print(sum);
}

void loop() {
}

int add(int a, int b) {
  int c;
  c = a + b;
  return c;
}
