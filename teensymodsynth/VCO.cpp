#include "Arduino.h"
#include "VCO.h"
#include "Socket.h"

VCO::VCO() {
  float freq = 120;
  _patchCable1 = new AudioConnection(_freqMod, 0, _saw, 0);
  _patchCable2 = new AudioConnection(_freqMod, 0, _square, 0);
  _patchCable3 = new AudioConnection(_freqMod, 0, _triangle, 0);
  _patchCable4 = new AudioConnection(_freqMod, 0, _sine, 0);
  _saw.begin(0.5,freq,WAVEFORM_SAWTOOTH);
  _square.begin(0.5,freq,WAVEFORM_SQUARE);
  _triangle.begin(0.5,freq,WAVEFORM_TRIANGLE);
  _sine.begin(0.5,freq,WAVEFORM_SINE);
  _freqMod.gain(0.1);
  sockets[0].setInput(_freqMod, 0);
  sockets[1].setOutput(_saw, 0);
  sockets[2].setOutput(_square, 0);
  sockets[3].setOutput(_triangle, 0);
  sockets[4].setOutput(_sine, 0);
  
}
