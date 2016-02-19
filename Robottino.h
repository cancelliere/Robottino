#ifndef Robottino_h
#define Robottino_h

#include "Arduino.h"
#include "pitches.h"
#include "Servo.h"
#include "U8glib.h"

class Robottino {
public:
  Robottino();
  
  void ruota (int stepDelay);
  void espressione(const uint8_t mouthStyle[]);
  
  void mostra (byte sensor);
  
  void naso (int colour[3]);
  void nasoLampeggiante (int interval, int col[3]);

  
  void theremin(int sensorValue);
  void beep ();
  void superMario();

};

extern const uint8_t vuota[] PROGMEM;
extern const uint8_t normale[] PROGMEM;

extern byte antennaDestra;
extern byte antennaSinistra;
extern byte antenne;
extern byte occhi;

extern int veloce;
extern int lento;
extern int crazy;

extern int nero[3];
extern int bianco[3];
extern int rosso[3];
extern int arancio[3];
extern int giallo[3];
extern int verde[3];
extern int blu[3];
extern int indaco[3];
extern int viola[3];
extern int arcobaleno[3];

#endif

