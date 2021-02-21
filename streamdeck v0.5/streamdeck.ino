// Arduino MIDI interface for OBS-MIDI

// Include Control_Surface library
#include <Control_Surface.h>

// Interface type to use
USBMIDI_Interface midi;

// The note numbers corresponding to the buttons in the matrix
const AddressMatrix<4, 3> addresses = {{
  {1, 2, 3},
  {4, 5, 6},
  {7, 8, 9},
  {10, 11, 12},
}};
 
NoteButtonMatrix<4, 3> buttonmatrix = {
  {2, 3, 4, 5}, // row pins
  {6, 7, 8},    // column pins
  addresses,    // address matrix
  CHANNEL_1,    // channel and cable number
};

// Define pots {Pin number, Controller number}
//CCPotentiometer potentiometers[] = {
//  {A0, 0x10},
//  {A1, 0x11},
//  {A2, 0x12},
//  {A3, 0x13},
//};o

// Initialise control surface
void setup() {
  Control_Surface.begin();
}

// Start loop
void loop() {
  Control_Surface.loop();
}
