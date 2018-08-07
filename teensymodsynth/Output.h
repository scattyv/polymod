#ifndef Output_h
#define Output_h
#include "Arduino.h"
#include "Module.h"
#include <Audio.h>

class Output : public Module {
  public:
    Output();
  private:
    AudioOutputI2S _output;
};

#endif