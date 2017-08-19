#define _GNU_SOURCE

#include "MicroBit.h" 
#include <array>
#include <stdlib.h>
MicroBit uBit;


int initTime = uBit.systemTime(); 


int main() 
{
    uBit.init();
    
    while ( true ) {
        uBit.display.scroll(ManagedString(uBit.thermometer.getTemperature()));
        uBit.sleep(4200);
        uBit.sleep(1);
    }
    release_fiber();
}
