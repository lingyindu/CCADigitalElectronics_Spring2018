/*
  Multiple tone player

  Plays multiple tones on multiple pins in sequence

  circuit:
  - three 8 ohm speakers on digital pins 6, 7, and 8

  created 8 Mar 2010
  by Tom Igoe
  based on a snippet from Greg Borenstein

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Tone4
*/

void setup() {

}

void loop() {
  // turn off tone function for pin 8:
  noTone(8);
  // play a note on pin 6 for 200 ms:
  tone(6, 440, 200);
  digitalWrite(9, HIGH);
  delay(200);
  digitalWrite(9, LOW);

  // turn off tone function for pin 6:
  noTone(6);
  // play a note on pin 7 for 500 ms:
  tone(7, 494, 200);
  digitalWrite(9, HIGH);
  delay(200);
  digitalWrite(9, LOW);

  // turn off tone function for pin 7:
  noTone(7);
  // play a note on pin 8 for 300 ms:
  digitalWrite(9, HIGH);
  tone(8, 523, 300);
  delay(200);
  digitalWrite(9, LOW);

  delay(100);
}
