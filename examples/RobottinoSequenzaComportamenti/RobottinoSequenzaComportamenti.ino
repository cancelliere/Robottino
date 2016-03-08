#include "Robottino.h"

Robottino Peppino;

unsigned long start = millis();
byte comando = 0;

void setup() {
  Peppino.begin(); 
}

void loop() {
  if (millis() - start >= 10000) {
    start = millis();
    comando++;
  }
  switch (comando) {
    case 0:
        Peppino.mostra(antenne);
        break;
    case 1:
        Peppino.mostra(occhi);
        Peppino.beep(500);
        break;
    case 2:
        Peppino.espressione(vuota);
        Peppino.ruota(veloce);
        break;
    case 3:
        Peppino.nasoLampeggiante(verde, 250);
        break;
    case 4:
        Peppino.espressione(felice);
        break;
    case 5:
        Peppino.espressione(vuota);
        Peppino.superMario();
        break;
    default:
        comando = 0;
  }
}
