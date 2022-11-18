const byte piezoPin = 2;
const byte COUNT_NOTES = 39;

// частоты нот
int tones[COUNT_NOTES] = {
  392, 392, 392, 311, 466, 392, 311, 466, 392,
  587, 587, 587, 622, 466, 369, 311, 466, 392,
  784, 392, 392, 784, 739, 698, 659, 622, 659,
  415, 554, 523, 493, 466, 440, 466,
  311, 369, 311, 466, 392
};

// длительности нот
int durations[COUNT_NOTES] = {
  350, 350, 350, 250, 100, 350, 250, 100, 700,
  350, 350, 350, 250, 100, 350, 250, 100, 700,
  350, 250, 100, 350, 250, 100, 100, 100, 450,
  150, 350, 250, 100, 100, 100, 450,
  150, 350, 250, 100, 750
};

void setup() {
  pinMode(piezoPin, OUTPUT); // настраиваем вывод 2 на выход
}

void loop() {
  for (int i = 0; i <= COUNT_NOTES; i++) {
    tone(piezoPin, tones[i], durations[i] * 2);
    delay(durations[i] * 2);
    noTone(piezoPin);
  }
}
