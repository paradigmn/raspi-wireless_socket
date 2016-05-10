#include <stdio.h>
#include <stdlib.h>

void error(int code)
{
    switch(code)
    {
        case 1: printf("WiringPi is not installed or missing"); break;
        default: printf("An unknown error occurred"); break;
    }

    exit(code);
}
