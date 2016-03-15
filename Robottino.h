#ifndef Robottino_h
#define Robottino_h

#include "Arduino.h"
#include "pitches.h"
#include "SoftwareServo.h"
#include "U8glib.h"

class Robottino {
public:
  Robottino();

  void espressione(const uint8_t mouthStyle[]);
  void nomeScorrevole(char * nome);
  void beep (int interval);
  int leggiDistanza();
  int leggiLuce(byte sensor);
  void naso (int colour[3]);
  bool ruota (int stepDelay);
  void posiziona (int angle);
  void cominciaAContare();

  //UNNEEDED BY NOW
  void nasoLampeggiante (int col[3], int interval);
  void ruotaConLuce();
  void theremin(byte sensor);
  void superMario();
  void mostra (byte sensor);


  void begin ();
};

bool oggettoVicino();
bool luceAccesa();
bool secondiTrascorsiMinoriDi (int secondi);

extern const uint8_t vuota[] PROGMEM;
extern const uint8_t neutra[] PROGMEM;
extern const uint8_t felice[] PROGMEM;
extern const uint8_t spaventato[] PROGMEM;
extern const uint8_t fablabLogo[] PROGMEM;
extern const uint8_t robottinoLogo[] PROGMEM;

// to be verified with Giovanni
extern const uint8_t normale[] PROGMEM;
extern const uint8_t trollface[] PROGMEM;
extern const uint8_t angry[] PROGMEM;
extern const uint8_t bleh[] PROGMEM;
extern const uint8_t sad[] PROGMEM;
extern const uint8_t happy[] PROGMEM;
extern const uint8_t smile[] PROGMEM;
extern const uint8_t dumb[] PROGMEM;
extern const uint8_t scared[] PROGMEM;


extern byte antennaDestra;
extern byte antennaSinistra;
extern byte antenne;
extern byte occhi;

extern int veloce;
extern int lento;
extern int impazzito;

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

extern int silenzio;
extern int allarme;
#endif
