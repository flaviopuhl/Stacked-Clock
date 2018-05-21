void displayTest(){

    for (int thisPinBar = barCount - 1; thisPinBar >= 0; thisPinBar--) {
      digitalWrite(barPins[thisPinBar], HIGH);
            for (int thisPin = pinCount - 1; thisPin >= 0; thisPin--) {
              // turn the pin on:
              digitalWrite(ledPins[thisPin], HIGH);
              delay(10);
              // turn the pin off:
              digitalWrite(ledPins[thisPin], LOW);
            }
      digitalWrite(barPins[thisPinBar], LOW);
    }

}
