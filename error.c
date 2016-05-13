#include <stdio.h>
#include <stdlib.h>

void error(int code)
{
    switch(code)
    {
        case 1: printf("WiringPi is not installed or missing\n"); break;
        case 2: printf("Invalid Input, type 'wifiplug [Plug(0-31)] [Remote(0-31)] [State(On/Off)]'\n"); break;
        case 3: printf("Calculation error\n");
        default: printf("An unknown error occurred\n"); break;
    }

    exit(code);
}