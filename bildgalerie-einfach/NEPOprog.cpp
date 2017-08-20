#define _GNU_SOURCE

#include "MicroBit.h" 
#include <array>
#include <stdlib.h>
MicroBit uBit;


int initTime = uBit.systemTime(); 

array<MicroBitImage,6> galerie = {MicroBitImage("0,0,0,0,0\n0,255,0,255,0\n0,0,0,0,0\n255,0,0,0,255\n0,255,255,255,0\n"), MicroBitImage("0,0,0,0,0\n0,0,0,0,255\n0,0,0,255,0\n255,0,255,0,0\n0,255,0,0,0\n"), MicroBitImage("0,255,0,255,0\n255,255,255,255,255\n255,255,255,255,255\n0,255,255,255,0\n0,0,255,0,0\n"), MicroBitImage("0,0,0,0,0\n255,255,0,255,255\n0,0,0,0,0\n0,255,255,255,0\n0,0,0,0,0\n"), MicroBitImage("0,255,255,255,255\n255,255,0,255,0\n255,255,255,0,0\n255,255,255,255,0\n0,255,255,255,255\n"), MicroBitImage("0,255,255,255,0\n255,255,255,255,255\n0,0,255,0,0\n255,0,255,0,0\n0,255,255,0,0\n")};
double position = 0;

int main() 
{
    uBit.init();
    
    while ( true ) {
        uBit.display.print(galerie[position]);
        while (1) {
            if ( uBit.buttonB.isPressed() == false ) {
                break;
            }
            uBit.sleep(1);
        }
        uBit.sleep(100);
        while (1) {
            if ( uBit.buttonB.isPressed() == true ) {
                break;
            }
            uBit.sleep(1);
        }
        position += 1;
        if ( position >= ((int) galerie.size()) ) {
            position = 0;
        }
        uBit.sleep(1);
    }
    release_fiber();
}
