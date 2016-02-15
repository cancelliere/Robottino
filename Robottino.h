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
  void bocca(const uint8_t mouthStyle[]);
  
  void mostra (int sensorValue);
  
  void nasoArcobaleno ();
  void naso (int colour[3]);
  
  void theremin(int sensorValue);
  void beep ();
  void superMario();

};

extern const uint8_t vuota[] PROGMEM;
extern const uint8_t normale[] PROGMEM;

int antennaDestra();
int antennaSinistra();
int antenne();
int occhi();

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
extern int biancoSpento[3];

#endif

