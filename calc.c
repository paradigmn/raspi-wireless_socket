#include <stdio.h>
#include <stdlib.h>

int calc(char *argv[])
{
    int device = atoi(argv[1]);

    device = device << 5;
    device = device + atoi(argv[2]);
    device = device << 2;

    if ((strcmp(argv[3], "on") == 0))
        device = device + 2;

    else if ((strcmp(argv[3], "off") == 0))
        device = device + 1;

    return device;
}

