#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>

#define BUFFER 320

void send_key(int key)
{
    int j;
    int off = 0b10001110;
    int on = 0b10001000;

    if (key == 1)
    {
        for (j = 0; j < 8; j++)
        {
            digitalWrite(8, ("%d", ((on & 0x80) != 0 ? 1 : 0)));
            on = on << 1;
            delayMicroseconds(BUFFER);
        }
    }

    else if (key == 0)
    {
        for (j = 0; j < 8; j++)
        {
            digitalWrite(8, ("%d", ((off & 0x80) != 0 ? 1 : 0)));
            off = off << 1;
            delayMicroseconds(BUFFER);
        }
    }
    else
        error(3);
}


void send_frame(int device)
{

    int j;

    for (j = 0; j < 27; j++)
    {
        delayMicroseconds(BUFFER);
    }

    for (j = 0; j < 12; j++)
    {
        send_key(((device & 0x800) != 0 ? 1 : 0));
        device = device << 1;
    }

    digitalWrite(8, 1);
    delayMicroseconds(BUFFER);
    digitalWrite(8, 0);
    delayMicroseconds(BUFFER);
}
