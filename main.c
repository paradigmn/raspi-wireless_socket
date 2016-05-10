#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>
#include "functions.h"

int main(int argc, char *argv[])
{
    int i;
    int device;

    piHiPri(20);

    if (wiringPiSetup () == -1)
        error(1);

    pinMode(8, OUTPUT);

    device = calc(argv);

    for (i = 0; i < 30; i++)
        send_frame(device);

    digitalWrite(8, 0);

    return 0;
}

