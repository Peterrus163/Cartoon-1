#include "TXLib.h"

void house (int x, int y, int size);
void man   (int x, int y, int size, double lhandm, double rhandm, double legsm);
void girl  (int x, int y, int size, double lhandg, double rhandg, double legsg);
void tree  (int x, int y, int size);
void sun   (int x, int y, int size);

int main ()
    {
    txCreateWindow (1200, 800);

    txSetFillColor (TX_WHITE);
    txRectangle (0, 0, 1200, 800);

    for (int z = 1; z <= 20; z++)
        {
        if (z % 2 == 0)
            {
            man   ( 450, 350, 1, 0, 0, 0);
            }
        else
            {
            man   ( 450, 350, 1, 0 + z, 0, 0);
            }
            }

    for (int z = 1; z <= 20; z++)
        {
        if (z % 2 == 0)
            {
            man   ( 450, 350, 1, 0, 0, 0);
            }
        else
            {
            man   ( 450, 350, 1, 0, 0 + z, 0);
            }
            }

    house (   0,   0, 1);
    man   ( 450, 350, 1, 0, 0, 0);
    girl  ( 750, 380, 1, 0, 0, 0);
    tree  (1000, 500, 1);
    sun   (1200,   0, 1);

    return 0;
    }
//-------------------------------------------------------------------------
void house (int x, int y, int size)
    {
    txSetColor     (RGB (  0,   0,   0), 2);
    txSetFillColor (RGB (160, 160, 160));
    txRectangle    (x*size, y*size, x+200*size, y+500*size);

    txSetFillColor (RGB (255, 255, 255));
    txRectangle    (x + 50*size, y + 50*size, x + 150*size, y + 200*size);

    txLine (x + 100*size, y +  50*size, x + 100*size, y + 200*size);
    txLine (x +  50*size, y + 100*size, x + 150*size, y + 100*size);

    txRectangle (x + 50*size, y + 300*size, x + 150*size, y + 500*size);

    txSetFillColor (RGB (0, 0, 0));
    txRectangle    (x + 115*size, y + 400*size, x + 125*size, y + 425*size);
    }
//-------------------------------------------------------------------------
void man   (int x, int y, int size, double lhandm, double rhandm, double legsm)
    {
//! руки
    txSetColor (RGB (  0,   0,   0), 3);
    txLine     (x - 100*size - lhandm, y + 50*size - lhandm, x -  50*size,          y*size);
    txLine     (x +  50*size,          y*size,               x + 100*size + rhandm, y + 50*size - rhandm);

//! ноги
    txLine (x*size, y + 100*size, x - 25*size + legsm, y + 150*size);
    txLine (x*size, y + 100*size, x + 25*size - legsm, y + 150*size);

    txSetFillColor (RGB (0, 0, 0));
    POINT bodyman [4] {{x - 50*size, y*size},       {x + 50*size, y*size},
                       {x*size,      y + 100*size}, {x - 50*size, y*size}};
    txPolygon (bodyman, 4);

    txSetFillColor (RGB (255, 255, 255));
    txCircle       (x*size, y - 25*size, 25*size);

    txSetFillColor (RGB (0, 0, 0));
    txRectangle    (x - 25*size, y - 50*size, x + 25*size, y - 60*size);
    txRectangle    (x - 10*size, y - 60*size, x + 10*size, y - 80*size);
    }
//-------------------------------------------------------------------------
void girl  (int x, int y, int size, double lhandg, double rhandg, double legsg)
    {
//! руки
    txSetColor (RGB (  0,   0,   0), 3);
    txLine     (x - 75*size, y + 45*size - lhandg, x*size,               y + 20*size);
    txLine     (x*size,      y + 20*size,          x + 75*size + rhandg, y + 45*size);


    txSetFillColor (RGB (255, 128, 255));
    POINT bodygirl [4] {{x - 50*size, y + 80*size}, {x + 50*size, y + 80*size},
                        {x*size,      y*size},      {x - 50*size, y + 80*size}};
    txPolygon (bodygirl, 4);

//! ноги
    txLine (x*size, y + 80*size, x - 25*size + legsg, y + 120*size);
    txLine (x*size, y + 80*size, x + 25*size - legsg, y + 120*size);

    txSetFillColor (RGB (255, 255, 255));
    txCircle       (x*size, y - 15*size, 20*size);

    txSetFillColor (RGB (255, 0, 0));
    POINT bowtieleftside [4] {{x - 15*size, y - 30*size}, {x - 15*size, y - 55*size},
                              {x*size,      y - 40*size}, {x - 15*size, y - 30*size}};
    txPolygon (bowtieleftside, 4);

    POINT bowtierightside [4] {{x + 15*size, y - 30*size}, {x + 15*size, y - 55*size},
                               {x*size,      y - 40*size}, {x + 15*size, y - 30*size}};
    txPolygon (bowtierightside, 4);
    }
//-------------------------------------------------------------------------
void tree  (int x, int y, int size)
    {
    txSetColor     (RGB (  0,   0,   0), 3);
    txSetFillColor (RGB (139, 69, 19));
    txRectangle    (x, y, x + 25, y - 250);

    txSetColor     (RGB (  0,   0,   0), 3);
    txSetFillColor (RGB (  0, 128,   0));
    txCircle       (x + 12*size, y - 150*size, 75*size);

    txCircle       (x + 12*size, y - 250*size, 50*size);
    }
//-------------------------------------------------------------------------
void sun   (int x, int y, int size)
    {
    txSetColor     (RGB (  0,   0,   0), 3);
    txSetFillColor (RGB (255, 255, 128));
    txCircle       (x*size, y*size, 100*size);
    }
