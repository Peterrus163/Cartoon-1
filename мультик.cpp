#include "TXLib.h"

void house (int x, int y, int size);
void man   (int x, int y, int size, double lhandm, double lhamdmh, double rhandm, double rhamdmh, int lleg, int rleg);
void girl  (int x, int y, int size, double lhandg, double rhandg);
void tree  (int x, int y, int size);
void tree1 (int x, int y, int size);
void sun   (int x, int y, int size);
void ball  (int x, int y, int size, int h, int l);
void sea   ();

void Scene_1();
void Scene_2();

int main ()
    {
    txCreateWindow (1200, 800);

    txSetFillColor (TX_WHITE);
    txRectangle (0, 0, 1200, 800);

    Scene_1();
    Scene_2();

    return 0;
    }

void Scene_1()
{
//Ńöĺíŕ 1--------------------------------------------------------------------------------------------------------------
//Äĺâî÷ęŕ čăđŕĺň â ě˙÷čę
    for (int z = 0; z <= 8; z++)
    {
    house (   0,   0, 1);
    girl  ( 550, 380, 1, 30 * (z % 2), 30 * (z % 2));
    tree  (1100, 500, 1);
    tree1 ( 950, 450, 1);
    tree  ( 300, 400, 1);
    sun   (1200,   0, 1);
    sea   ();
    ball  ( 635, 385, 1, 100 * (z % 2), 0);


    txSleep (450);
    txSetFillColor (TX_WHITE);
    txClear();
    }

//Ě˙÷čę ëĺňčę â đĺ÷ęó
    for (int z = 1; z <= 4; z++)
    {
    house (   0,   0, 1);
    girl  ( 550, 380, 1, 0, 0);
    tree  (1100, 500, 1);
    tree1 ( 950, 450, 1);
    tree  ( 300, 400, 1);
    sun   (1200,   0, 1);
    sea   ();
    ball  ( 635, 385, 1, -80 * (z % 5), 80 * (z % 5));

    txSleep (450);
    txSetFillColor (TX_WHITE);
    txClear();
    }

//Ě˙÷čę ëĺćčň â đĺ÷ęĺ
    {
    house (   0,   0, 1);
    girl  ( 550, 380, 1, 0, 0);
    tree  (1100, 500, 1);
    tree1 ( 950, 450, 1);
    tree  ( 300, 400, 1);
    sun   (1200,   0, 1);
    sea   ();
    ball  ( 955, 705, 1, 0, 0);
    }
}
 
void Scene_2()
{
//Ńöĺíŕ 2--------------------------------------------------------------------------------------------------------------
//Ďî˙âë˙ĺňń˙ ěŕëü÷čę
    {
    house (   0,   0, 1);
    girl  ( 550, 380, 1, 0, 0);
    tree  (1100, 500, 1);
    tree1 ( 950, 450, 1);
    tree  ( 300, 400, 1);
    sun   (1200,   0, 1);
    sea   ();
    man   ( 200, 600, 1, 0, 0, 0, 0, 0, 0);
    ball  ( 955, 705, 1, 0, 0);
    }

//Ěŕëü÷čę čä¸ň ę ě˙÷ó
    for (int z = 0; z <= 7; z++)
    {
    house (   0,   0, 1);
    girl  ( 550, 380, 1, 0, 0);
    tree  (1100, 500, 1);
    tree1 ( 950, 450, 1);
    tree  ( 300, 400, 1);
    sun   (1200,   0, 1);
    sea   ();
    man   ( 200 + 90 * (z % 8), 600, 1, 0, 0, 0, 0, 0, 0);
    ball  ( 955, 705, 1, 0, 0);

    txSleep (450);
    txSetFillColor (TX_WHITE);
    txClear();
    }

//Ěŕëü÷čę ďđčř¸ë ę ě˙÷ó
    {
    house (   0,   0, 1);
    girl  ( 550, 380, 1, 0, 0);
    tree  (1100, 500, 1);
    tree1 ( 950, 450, 1);
    tree  ( 300, 400, 1);
    sun   (1200,   0, 1);
    sea   ();
    man   ( 830, 600, 1, 200, 50, 0, 50, 0, 0);
    ball  ( 955, 705, 1, 0, 0);
    }

//Ěŕëü÷čę áĺđ¸ň ě˙÷čę
    {
    house (   0,   0, 1);
    girl  ( 550, 380, 1, 0, 0);
    tree  (1100, 500, 1);
    tree1 ( 950, 450, 1);
    tree  ( 300, 400, 1);
    sun   (1200,   0, 1);
    sea   ();
    man   ( 830, 600, 1, 200, 50, 0, 50, 0, 0);
    ball  ( 925, 685, 1, 0, 0);
    }

//Ěŕëü÷čę čä¸ň ę äĺâî÷ęĺ ń ě˙÷čęîě
    for (int z = 0; z <= 5; z++)
    {
    house (   0,   0, 1);
    girl  ( 550, 380, 1, 0, 0);
    tree  (1100, 500, 1);
    tree1 ( 950, 450, 1);
    tree  ( 300, 400, 1);
    sun   (1200,   0, 1);
    sea   ();
    man   ( 830, 600 - 50 * (z % 6), 1, 200, 50, 0, 50, 0, 0);
    ball  ( 925, 685 - 50 * (z % 6), 1, 0, 0);

    txSleep (450);
    txSetFillColor (TX_WHITE);
    txClear();
    }

//Ěŕëü÷čę ďđčř¸ë ę äĺâî÷ęĺ ń ě˙÷čęîě
    {
    house (   0,   0, 1);
    girl  ( 550, 380, 1, 0, 0);
    tree  (1100, 500, 1);
    tree1 ( 950, 450, 1);
    tree  ( 300, 400, 1);
    sun   (1200,   0, 1);
    sea   ();
    man   ( 830, 330, 1, 200, 50, 0, 50, 0, 0);
    ball  ( 925, 420, 1, 0, 0);

    txSetFillColor (TX_WHITE);
    txClear();
    }

//Ěŕëü÷čę ďîâĺđíóëń˙ ę äĺâî÷ęĺ ń ě˙÷čęîě
    {
    house (   0,   0, 1);
    girl  ( 550, 380, 1, 0, 0);
    tree  (1100, 500, 1);
    tree1 ( 950, 450, 1);
    tree  ( 300, 400, 1);
    sun   (1200,   0, 1);
    sea   ();
    man   ( 830, 330, 1, 0, 50, -200, 50, -50, -50);
    ball  ( 725, 420, 1, 0, 0);
    }
}

//-------------------------------------------------------------------------
void house (int x, int y, int size)
    {
/*
Ďŕđŕěĺňđű:
x, y - ęîîđäčíŕňű
size - đŕçěĺđ ôčăóđű
*/

//--- äîě
    txSetColor     (RGB (  0,   0,   0), 2);
    txSetFillColor (RGB (160, 160, 160));
    txRectangle    (x*size, y*size, x+200*size, y+500*size);

//--- îęíî
    txSetFillColor (RGB (255, 255, 255));
    txRectangle    (x + 50*size, y + 50*size, x + 150*size, y + 200*size);

    txLine (x + 100*size, y +  50*size, x + 100*size, y + 200*size);
    txLine (x +  50*size, y + 100*size, x + 150*size, y + 100*size);

//--- äâĺđü
    txRectangle (x + 50*size, y + 300*size, x + 150*size, y + 500*size);

//--- đó÷ęŕ
    txSetFillColor (RGB (0, 0, 0));
    txRectangle    (x + 115*size, y + 400*size, x + 125*size, y + 425*size);
    }
//-------------------------------------------------------------------------
void man   (int x, int y, int size, double lhandm, double lhamdmh, double rhandm, double rhamdmh, int lleg, int rleg)
    {
/*
Ďŕđŕěĺňđű:
x, y - ęîîđäčíŕňű
size - đŕçěĺđ ôčăóđű
lhandm - ďîëîćĺíčĺ ëĺâîé đóęč "äëčíŕ"
lhamdmh - ďîëîćĺíčĺ ëĺâîé đóęč ďî âűńîňĺ
rhandm - ďîëîćĺíčĺ ďđŕâîé đóęč "äëčíŕ"
rhandmh - ďîëîćĺíčĺ ďđŕâîé đóęč ďî âűńîňĺ
lleg - ďîëîćĺíčĺ ëĺâîé íîăč
rleg - ďîëîćĺíčĺ ďđŕâîé íîăč
*/

//! đóęč
    txSetColor (RGB ( 0, 0, 0), 3);
    txLine     (x - 100*size + lhandm, y + 50*size + lhamdmh, x -  50*size,          y*size);
    txLine     (x +  50*size,          y*size,                x + 100*size + rhandm, y + 50*size + rhamdmh);

//! íîăč
    txLine (x*size,      y + 100*size, x - 25*size, y + 170*size);
    txLine (x*size,      y + 100*size, x + 25*size, y + 170*size);
    txLine (x - 25*size, y + 170*size, x*size + lleg,     y + 170*size);
    txLine (x + 25*size, y + 170*size, x + 50*size + rleg, y + 170*size);

//--- ňĺëî
    txSetFillColor (RGB (0, 0, 0));
    POINT bodyman [4] {{x - 50*size, y*size},       {x + 50*size, y*size},
                       {x*size,      y + 100*size}, {x - 50*size, y*size}};
    txPolygon (bodyman, 4);

//--- ăîëîâŕ
    txSetFillColor (RGB (255, 255, 255));
    txCircle       (x*size, y - 25*size, 25*size);

//--- řë˙ďŕ
    txSetFillColor (RGB (0, 0, 0));
    txRectangle    (x - 25*size, y - 50*size, x + 25*size, y - 60*size);
    txRectangle    (x - 10*size, y - 60*size, x + 10*size, y - 80*size);
    }
//-------------------------------------------------------------------------
void girl  (int x, int y, int size, double lhandg, double rhandg)
    {
/*
Ďŕđŕěĺňđű:
x, y - ęîîđäčíŕňű
size - đŕçěĺđ ôčăóđű
lhandg - ďîëîćĺíčĺ ëĺâîé đóęč
rhandg - ďîëîćĺíčĺ ďđŕâîé đóęč
*/

//--- đóęč
    txSetColor (RGB (  0, 0, 0), 3);
    txLine     (x + 75*size, y + 30*size - lhandg, x*size,      y + 20*size);
    txLine     (x*size,               y + 20*size, x + 75*size, y + 45*size - rhandg);


//--- ňĺëî
    txSetFillColor (RGB (255, 128, 255));
    POINT bodygirl [4] {{x - 50*size, y + 80*size}, {x + 50*size, y + 80*size},
                        {x*size,      y*size},      {x - 50*size, y + 80*size}};
    txPolygon (bodygirl, 4);

//--- íîăč
    txLine (x*size, y + 80*size, x - 25*size, y + 120*size);
    txLine (x*size, y + 80*size, x + 25*size, y + 120*size);
    txLine (x - 25*size, y + 120*size, x - 5*size, y + 120*size);
    txLine (x + 25*size, y + 120*size, x + 45*size, y + 120*size);

//--- ăîëîâŕ
    txSetFillColor (RGB (255, 255, 255));
    txCircle       (x*size, y - 15*size, 20*size);

//--- áŕíňčę
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
/*
Ďŕđŕěĺňđű:
x, y - ęîîđäčíŕňű
size - đŕçěĺđ ôčăóđű
*/

//--- ńňâîë
    txSetColor     (RGB (  0,  0,  0), 3);
    txSetFillColor (RGB (139, 69, 19));
    txRectangle    (x, y, x + 25, y - 250);

//--- ęđîíŕ
    txSetColor     (RGB (  0,   0,   0), 3);
    txSetFillColor (RGB (  0, 128,   0));
    txCircle       (x + 12*size, y - 150*size, 75*size);

    txCircle       (x + 12*size, y - 250*size, 50*size);
    }
//-------------------------------------------------------------------------
void tree1  (int x, int y, int size)
    {
/*
Ďŕđŕěĺňđű:
x, y - ęîîđäčíŕňű
size - đŕçěĺđ ôčăóđű
*/

//--- ńňâîë
    txSetColor     (RGB (  0,  0,  0), 3);
    txSetFillColor (RGB (160, 82, 45));
    txRectangle    (x, y, x + 25, y - 250);

//--- ęđîíŕ
    txSetColor     (RGB ( 0,   0,  0), 3);
    txSetFillColor (RGB (50, 205, 50));
    txCircle       (x + 12*size, y - 150*size, 75*size);

    txCircle       (x + 12*size, y - 250*size, 50*size);
    }
//-------------------------------------------------------------------------
void sun   (int x, int y, int size)
    {
/*
Ďŕđŕěĺňđű:
x, y - ęîîđäčíŕňű
size - đŕçěĺđ ôčăóđű
*/

    txSetColor     (RGB (  0,   0,   0), 3);
    txSetFillColor (RGB (255, 255, 128));
    txCircle       (x*size, y*size, 100*size);
    }
//-------------------------------------------------------------------------
void ball  (int x, int y, int size, int h, int l)
    {
/*
Ďŕđŕěĺňđű:
x, y - ęîîđäčíŕňű
size - đŕçěĺđ ôčăóđű
h - âűńîňŕ
l - äëčíŕ
*/

    txSetColor     (RGB (  0,   0, 0), 3);
    txSetFillColor (RGB (255, 140, 0));
    txCircle       (x*size + l, y*size - h, 40*size);
    }
//-------------------------------------------------------------------------
void sea ()
    {
/*
Ďŕđŕěĺňđű:
x, y - ęîîđäčíŕňű
size - đŕçěĺđ ôčăóđű
*/

    txSetColor     (RGB (0,   0,   0), 3);
    txSetFillColor (RGB (0, 191, 255));
    txEllipse (650, 1000, 2400, 500);
    }
//-------------------------------------------------------------------------

