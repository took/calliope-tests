#define _GNU_SOURCE

#include "MicroBit.h" 
#include <array>
#include <stdlib.h>
MicroBit uBit;


int initTime = uBit.systemTime(); 

double r = 255;
double g = 0;
double b = 0;
double step = 0;
double tmp = 0;

int main() 
{
    uBit.init();
    
    uBit.accelerometer.updateSample();
    while ( true ) {
        if ( (uBit.accelerometer.getGesture() == MICROBIT_ACCELEROMETER_EVT_SHAKE) ) {
            step = 0;
        } else if ( true ) {
        }
        if ( uBit.buttonA.isPressed() ) {
            step = 512;
        } else if ( true ) {
        }
        if ( uBit.buttonB.isPressed() ) {
            step = 1024;
        } else if ( true ) {
        }
        step = step + 1;
        if ( step > 1535 ) {
            step = 0;
        }
        tmp = (int) step % ((int) 256);
        if ( step <= 255 ) {
            r = 255 - tmp;
            g = tmp;
            b = 0;
        } else {
            if ( step <= 511 ) {
                r = 0;
                g = 255;
                b = 0;
            } else {
                if ( step <= 767 ) {
                    r = 0;
                    g = 255;
                    b = tmp;
                } else {
                    if ( step <= 1023 ) {
                        r = 0;
                        g = 255 - tmp;
                        b = 255;
                    } else if ( step <= 1279 ) {
                        r = tmp;
                        g = 0;
                        b = 255;
                    } else {
                        r = 255;
                        g = 0;
                        b = 255 - tmp;
                    }
                }
            }
        }
        uBit.rgb.setColour(MicroBitColor(r, g, b, 0));
        uBit.sleep(2);
        uBit.sleep(1);
    }
    release_fiber();
}
