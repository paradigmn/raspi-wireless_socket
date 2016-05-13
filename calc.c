#include <stdio.h>
#include <stdlib.h>

int calc(char *argv[])
{
    if ((atoi(argv[1]) < 0) || (atoi(argv[1]) > 31))
        error(2);
    else if ((atoi(argv[2]) < 0) || (atoi(argv[2]) > 31))
        error(2);

    int device = atoi(argv[1]);

    device = device << 5;
    device = device + atoi(argv[2]);
    device = device << 2;

    if ((strcmp(argv[3], "on") == 0))
        device = device + 2;
    else if ((strcmp(argv[3], "off") == 0))
        device = device + 1;
    else error(2);

    return device;
}

