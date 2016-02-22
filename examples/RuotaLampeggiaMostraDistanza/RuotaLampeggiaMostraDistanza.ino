#include "Robottino.h"

Robottino Peppino;           //Peppino è appena nato

void setup() {                     
  Peppino.begin();              //Sveglia Peppino dal suo sonnellino
}

void loop() {  
  Peppino.ruota(lento);      //gira la testa
  Peppino.beep(1000);       //produce un "beep" ogni mille millisecondi (un secondo)
  Peppino.nasoLampeggiante (blu, 500);  //anche il naso lampeggia ogni mezzo secondo
  Peppino.mostra(occhi);   //sulla bocca compare la distanza in centimetri degli ostacoli di fronte a Peppino       
}
