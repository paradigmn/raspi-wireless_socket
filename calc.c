#include <stdio.h>
#include <stdlib.h>

int calc(char *argv[])
{
    if ((atoi(argv[1]) < 0) || (atoi(argv[1]) > 31))            //check if plugnumber is valid
        error(2);
    else if ((atoi(argv[2]) < 0) || (atoi(argv[2]) > 31))       //check if remotenumber is valid
        error(2);

    int device = atoi(argv[1]);

    device = device << 5;                                       //generating code by bitshift
    device = device + atoi(argv[2]);
    device = device << 2;

    if ((strcmp(argv[3], "on") == 0))                           //check if stateparameter is valid
        device = device + 2;
    else if ((strcmp(argv[3], "off") == 0))
        device = device + 1;
    else error(2);

    return device;                                              //release code for sendroutine
}

