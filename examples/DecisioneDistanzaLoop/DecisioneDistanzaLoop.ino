#include "Robottino.h"

Robottino Peppino;

void setup() {
  Peppino.begin();
}

void loop() {
  Peppino.beep(250); // testare i valori che danno un buon risultato
  Peppino.leggiDistanza(); 
  
  if (oggettoVicino()) { // scegliere la distanza che fa da soglia, magari si può passare come argomento
    Peppino.cominciaAContare();
    while ( secondiTrascorsiMinoriDi (5) ) {
      Peppino.naso(blu);
    }
  }
  
  else {
    Peppino.naso(verde);
  }
}
