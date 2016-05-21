#include "pitches.h"

int arraySize = 8;

// notes in the melody:
int melody[] = { 
  NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5 
};

// 각 음의 길이. 4분 음표, 8분 음표 등등...
int noteDurations[] = { 8, 8, 6, 6, 4, 4, 4, 4 };

void setup() {
  for (int note = 0; note < arraySize; note ++) {
 
    // noteDurations 배열 값은 음표의 길이이므로 1초를 해당 숫자로 나눠서
    // 시간을 구한 다음 사용
    // 예) 4분 음표 = 1000 / 4,    8분 음표 = 1000/8 ...
    int duration = 1000/ noteDurations[note];
    tone(2, melody[note], duration);
 
    // 음표의 연주시간 + 30 ms 만큼 대기
    delay(duration+30);
  }
}

void loop() {
}

