#include "Robottino.h"

Robottino Peppino;

void setup() {
  Peppino.begin();
}

void loop() {
  Peppino.theremin(antenne);   //Peppino vuole cantare, aiutalo coprendo le sue antenne
}
