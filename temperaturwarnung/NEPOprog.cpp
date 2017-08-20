#define _GNU_SOURCE

#include "MicroBit.h" 
#include <array>
#include <stdlib.h>
MicroBit uBit;


int initTime = uBit.systemTime(); 

double temp = 0;

int main() 
{
    uBit.init();
    
    while ( true ) {
        temp = uBit.thermometer.getTemperature();
        if ( temp < 7 ) {
            if ( temp < 5 ) {
                uBit.rgb.setColour(MicroBitColor(51, 204, 0, 255));
            } else {
                uBit.rgb.setColour(MicroBitColor(255, 0, 0, 255));
            }
            uBit.sleep(50);
            uBit.rgb.off();
            uBit.sleep(7500);
        } else {
            for (int k0 = 0; k0 < 8; k0 += 1) {
                uBit.soundmotor.soundOn(369.994); uBit.sleep(125); uBit.soundmotor.soundOff();
                uBit.rgb.setColour(MicroBitColor(255, 0, 0, 255));
                uBit.sleep(150);
                uBit.rgb.off();
            }
            uBit.sleep(5000);
        }
        uBit.sleep(1);
    }
    release_fiber();
}
