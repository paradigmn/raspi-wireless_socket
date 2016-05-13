#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>
#include "functions.h"

int main(int argc, char *argv[])
{
    int i;
    int device;

    piHiPri(20);                        //high priority for undistorted waveform

    if (wiringPiSetup () == -1)         //check if wiringPI is installed
        error(1);

    pinMode(8, OUTPUT);                 //set GPIO2 as output

    device = calc(argv);                //calculate code for transmition

    for (i = 0; i < 30; i++)
        send_frame(device);             //transmit code for roughly a second

    digitalWrite(8, 0);                 //switch GPIO2 to low to save energy

    return 0;
}

