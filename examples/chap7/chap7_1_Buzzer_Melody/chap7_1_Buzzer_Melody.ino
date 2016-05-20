#include "pitches.h"

int arraySize = 8;
// notes in the melody:
int melody[] = { 
NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5 
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = { 8, 8, 6, 6, 4, 4, 4, 4 };

void setup() {
  for (int note = 0; note < arraySize; note ++) {
 
    // to calculate the note duration, take one second
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int duration = 1000/ noteDurations[note];
    tone(2, melody[note], duration);
 
    //pause for the note's duration plus 30 ms:
    delay(duration+30);
  }
}

void loop() {
}

