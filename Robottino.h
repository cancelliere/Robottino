#ifndef Robottino_h
#define Robottino_h

#include "Arduino.h"
#include "pitches.h"
#include "Servo.h"
#include "U8glib.h"

class Robottino {
public:
  Robottino();
  
  //TESTED
  
  void naso (int colour[3]);
  void nasoLampeggiante (int interval, int col[3]);
  void beep (int interval);
  void theremin(byte sensor);
  void superMario();
  void espressione(const uint8_t mouthStyle[]);
  void mostra (byte sensor);

  //UNTESTED
  void ruota (int stepDelay);
  void ruotaConLuce();

  void begin ();
};

void servoInit();

extern const uint8_t vuota[] PROGMEM;
extern const uint8_t normale[] PROGMEM;
extern const uint8_t trollface[] PROGMEM;
extern const uint8_t angry[] PROGMEM;
extern const uint8_t bleh[] PROGMEM;
extern const uint8_t sad[] PROGMEM;
extern const uint8_t happy[] PROGMEM;
extern const uint8_t smile[] PROGMEM;
extern const uint8_t dumb[] PROGMEM;
extern const uint8_t scaried[] PROGMEM;


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

