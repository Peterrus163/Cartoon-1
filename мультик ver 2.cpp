#include "TXLib.h"

void house       (int x, int y, int size);
void man         (int x, int y, int size, double lhandm, double lhandmh, double rhandm, double rhandmh, int lleg, int rleg);
void girl        (int x, int y, int size, double lhandg, double lhamdgh, double rhandg, double rhamdgh);
void tree        (int x, int y, int size, int color);
void tree1       (int x, int y, int size);
void sun         (int x, int y, int size);
void ball        (int x, int y, int size, int h, int l);
void sea         ();
void part_of_sea (int x, int y, int size);
void decor       ();
void tears       (int m);
void text        (int t);
void game        (int x, int sign);

void Scene_1();
void Scene_2();
void Scene_3();

int main ()
    {
    txCreateWindow (1200, 800);

    txSetFillColor (TX_WHITE);
    txRectangle (0, 0, 1200, 800);

    Scene_1();
    Scene_2();
    Scene_3();

    return 0;
    }

void Scene_1()
{
//—цена 1--------------------------------------------------------------------------------------------------------------
//ƒевочка играет в м€чик
    for (int h = 0; h <= 8; h++)
        {
        decor ();
        girl  (550, 380, 1, 0, 30 * (h % 2), 0, 30 * (h % 2));
        ball  (635, 385, 1, 100 * (h % 2), 0);

        txSetColor   (RGB (255, 0, 0));
        txSelectFont ("Comic Sans MS", 100);
        txTextOut    (525, 100, "ћ€чик");

        txSleep (450);
        txSetFillColor (TX_WHITE);
        txClear();
        }

//ћ€чик летит в речку
    for (int lh = 1; lh <= 4; lh++)
        {
        decor ();
        girl  (550, 380, 1, 0, 0, 0, 0);
        ball  (635, 385, 1, -80 * (lh % 5), 80 * (lh % 5));
        text  (1);

        txSleep (450);
        txSetFillColor (TX_WHITE);
        txClear();
        }
}

void Scene_2()
{
//—цена 2--------------------------------------------------------------------------------------------------------------
//ћальчик идЄт к м€чу
    for (int dx = 0; dx <= 7; dx++)
        {
        decor ();
        girl         (550,                 380, 1, 0, 0, 0, 0);
        tears        (dx % 4);
        man          (200 + 90 * (dx % 8), 600, 1, 0, 0, 0, 0, 0, 0);
        part_of_sea  (700,                 725, 1);
        ball         (955,                 705, 1, 0, 0);
        text  (1);

        txSleep (450);
        txSetFillColor (TX_WHITE);
        txClear();
        }
//ћальчик берЄт м€чик
    for (int dy = 0; dy <= 7; dy++)
        {
        decor ();
        girl         (550, 380 - 50 * (dy % 2), 1,   0,  0, 0,  0);
        man          (830, 600,                 1, 200, 50, 0, 50, 0, 0);
        part_of_sea  (700, 725,                 1);
        ball         (925, 685,                 1,   0,  0);
        text (2);

        txSetFillColor (TX_WHITE);
        txClear();
        }

//ћальчик идЄт к девочке с м€чиком
    for (int h = 0; h <= 5; h++)
        {
        decor ();
        girl         (550, 380 - 50 * (h % 2), 1, 150, 25 * (h % 2), 0, 35 * (h % 2));
        man          (830, 600 - 50 * (h % 6), 1, 200, 50,           0, 50          , 0, 0);
        part_of_sea  (750, 725 - 30 * (h % 4), 1);
        ball         (925, 685 - 50 * (h % 6), 1,   0,  0);
        text (2);

        txSleep (450);
        txSetFillColor (TX_WHITE);
        txClear();
        }
}

void Scene_3()
{
//—цена 3--------------------------------------------------------------------------------------------------------------
//ћальчик повернулс€ к девочке с м€чиком
    decor ();
    girl  (550, 380, 1, 0,  0,    0,  0);
    man   (830, 330, 1, 0, 50, -200, 50, -50, -50);
    ball  (725, 400, 1, 0,  0);
    text  (2);

    txSleep (450);
    txSetFillColor (TX_WHITE);
    txClear();

//ћальчик отдаЄт девочке м€чик
    decor ();
    girl  (550, 380, 1,   0, 0,    0, 0);
    man   (830, 330, 1, -15, 0, -170, 0, -50, -50);
    ball  (635, 400, 1,   0, 0);
    text  (2);

    txSleep (450);
    txSetFillColor (TX_WHITE);
    txClear();

//ƒвигаем девочку
    decor ();
    girl  (450, 380, 1,   0, 0,    0, 0);
    man   (830, 330, 1, -15, 0, -170, 0, -50, -50);
    ball  (535, 400, 1,   0, 0);
    text  (3);

    txSleep (450);
    txSetFillColor (TX_WHITE);
    txClear();

//–еб€та играют в м€чик
    for (int i = 0; i <= 2; i++)
        {
        game (535,  1);
        game (735, -1);
        }

// онец
    decor ();
    ball  (750, 725, 1, 0, 0);

    txSetColor   (RGB (255, 0, 0));
    txSelectFont ("Comic Sans MS", 150);
    txTextOut    (450, 300, " онец");
}

//-------------------------------------------------------------------------
void house (int x, int y, int size)
    {
/*
ѕараметры:
x, y - координаты
size - размер фигуры
*/

//--- дом
    txSetColor     (RGB (  0,   0,   0), 2);
    txSetFillColor (RGB (160, 160, 160));
    txRectangle    (x*size, y*size, x+200*size, y+500*size);

//--- окно
    txSetFillColor (RGB (255, 255, 255));
    txRectangle    (x + 50*size, y + 50*size, x + 150*size, y + 200*size);

    txLine (x + 100*size, y +  50*size, x + 100*size, y + 200*size);
    txLine (x +  50*size, y + 100*size, x + 150*size, y + 100*size);

//--- дверь
    txRectangle (x + 50*size, y + 300*size, x + 150*size, y + 500*size);

//--- ручка
    txSetFillColor (RGB (0, 0, 0));
    txRectangle    (x + 115*size, y + 400*size, x + 125*size, y + 425*size);
    }

//-------------------------------------------------------------------------
void man (int x, int y, int size, double lhandm, double lhandmh, double rhandm, double rhandmh, int lleg, int rleg)
    {
/*
ѕараметры:
x, y - координаты
size - размер фигуры
lhandm - положение левой руки "длина"
lhandmh - положение левой руки по высоте
rhandm - положение правой руки "длина"
rhandmh - положение правой руки по высоте
lleg - положение левой ноги
rleg - положение правой ноги
*/

//! руки
    txSetColor (RGB ( 0, 0, 0), 3);
    txLine     (x - 100*size + lhandm, y + 50*size + lhandmh, x -  50*size,          y*size);
    txLine     (x +  50*size,          y*size,                x + 100*size + rhandm, y + 50*size + rhandmh);

//! ноги
    txLine (x*size,      y + 100*size, x - 25*size,        y + 170*size);
    txLine (x*size,      y + 100*size, x + 25*size,        y + 170*size);
    txLine (x - 25*size, y + 170*size, x*size + lleg,      y + 170*size);
    txLine (x + 25*size, y + 170*size, x + 50*size + rleg, y + 170*size);

//--- тело
    txSetFillColor    (RGB (0, 0, 0));
    POINT bodyman [4] {{x - 50*size, y*size},       {x + 50*size, y*size},
                       {x*size,      y + 100*size}, {x - 50*size, y*size}};
    txPolygon         (bodyman, 4);

//--- голова
    txSetFillColor (RGB (255, 255, 255));
    txCircle       (x*size, y - 25*size, 25*size);

//--- шл€па
    txSetFillColor (RGB (0, 0, 0));
    txRectangle    (x - 25*size, y - 50*size, x + 25*size, y - 60*size);
    txRectangle    (x - 10*size, y - 60*size, x + 10*size, y - 80*size);
    }

//-------------------------------------------------------------------------
void girl (int x, int y, int size, double lhandg, double lhamdgh, double rhandg, double rhamdgh)
    {
/*
ѕараметры:
x, y - координаты
size - размер фигуры
lhandg - положение левой руки "длина"
lhandgh - положение левой руки по высоте
rhandg - положение правой руки "длина"
rhandgh - положение правой руки по высоте
*/

//--- руки
    txSetColor (RGB (  0, 0, 0), 3);
    txLine     (x + 75*size - lhandg, y + 30*size - lhamdgh, x*size,               y + 20*size);
    txLine     (x*size,               y + 20*size,           x + 75*size + rhandg, y + 45*size - rhamdgh);


//--- тело
    txSetFillColor     (RGB (255, 128, 255));
    POINT bodygirl [4] {{x - 50*size, y + 80*size}, {x + 50*size, y + 80*size},
                        {x*size,      y*size},      {x - 50*size, y + 80*size}};
    txPolygon          (bodygirl, 4);

//--- ноги
    txLine (x*size,      y +  80*size, x - 25*size, y + 120*size);
    txLine (x*size,      y +  80*size, x + 25*size, y + 120*size);
    txLine (x - 25*size, y + 120*size, x -  5*size, y + 120*size);
    txLine (x + 25*size, y + 120*size, x + 45*size, y + 120*size);

//--- голова
    txSetFillColor (RGB (255, 255, 255));
    txCircle       (x*size, y - 15*size, 20*size);

//--- бантик
    txSetFillColor            (RGB (255, 0, 0));
    POINT bowtieleftside [4]  {{x - 15*size, y - 30*size}, {x - 15*size, y - 55*size},
                              {x*size,      y - 40*size}, {x - 15*size, y - 30*size}};
    txPolygon                 (bowtieleftside, 4);

    POINT bowtierightside [4] {{x + 15*size, y - 30*size}, {x + 15*size, y - 55*size},
                               {x*size,      y - 40*size}, {x + 15*size, y - 30*size}};
    txPolygon                 (bowtierightside, 4);
    }

//-------------------------------------------------------------------------
void tree (int x, int y, int size, int color)
    {
/*
ѕараметры:
x, y - координаты
size - размер фигуры
color - параметр цвета дерева
*/
    if (color == 1)
    {
    //--- ствол
        txSetColor     (RGB (  0,  0,  0), 3);
        txSetFillColor (RGB (139, 69, 19));
        txRectangle    (x, y, x + 25, y - 250);

    //--- крона
        txSetColor     (RGB (0,   0, 0), 3);
        txSetFillColor (RGB (0, 128, 0));
        txCircle       (x + 12*size, y - 150*size, 75*size);
        txCircle       (x + 12*size, y - 250*size, 50*size);
    }
    else
    {
    //--- ствол
        txSetColor     (RGB (  0,  0,  0), 3);
        txSetFillColor (RGB (160, 82, 45));
        txRectangle    (x, y, x + 25, y - 250);

    //--- крона
        txSetColor     (RGB ( 0,   0,  0), 3);
        txSetFillColor (RGB (50, 205, 50));
        txCircle       (x + 12*size, y - 150*size, 75*size);
        txCircle       (x + 12*size, y - 250*size, 50*size);
    }
    }

//-------------------------------------------------------------------------
void sun (int x, int y, int size)
    {
/*
ѕараметры:
x, y - координаты
size - размер фигуры
*/

    txSetColor     (RGB (  0,   0,   0), 3);
    txSetFillColor (RGB (255, 255, 128));
    txCircle       (x*size, y*size, 100*size);
    }

//-------------------------------------------------------------------------
void ball (int x, int y, int size, int h, int l)
    {
/*
ѕараметры:
x, y - координаты
size - размер фигуры
h - высота
l - длина
*/

    txSetColor     (RGB (  0,   0, 0), 3);
    txSetFillColor (RGB (255, 140, 0));
    txCircle       (x*size + l, y*size - h, 40*size);
    }

//-------------------------------------------------------------------------
void sea ()
    {
/*
ѕараметры:
x, y - координаты
size - размер фигуры
*/

    txSetColor     (RGB (0,   0,   0), 3);
    txSetFillColor (RGB (0, 191, 255));
    txEllipse      (650, 1000, 2400, 500);
    }

//-------------------------------------------------------------------------
void part_of_sea (int x, int y, int size)
    {
/*
ѕараметры:
x, y - координаты
size - размер фигуры
*/

    txSetColor     (RGB ( 0, 191, 255));
    txSetFillColor (RGB ( 0, 191, 255));
    txRectangle    (x*size, y*size, x+200*size, y+100*size);
    }

//-------------------------------------------------------------------------
void decor ()
    {
    house (   0,   0, 1);
    tree  (1100, 500, 1, 1);
    tree  ( 950, 450, 1, 2);
    tree  ( 300, 400, 1, 1);
    sun   (1200,   0, 1);
    sea   ();
    }

//-------------------------------------------------------------------------
void tears (int m)
    {
    for (int dx = 0; dx <= m; dx++)
    {
    txSetColor     (RGB ( 0, 191, 255), 3);
    txArc          (440, 365, 675 + (15 * dx), 620, 360, 90);
    txSetFillColor (RGB (0, 191, 255));
    txEllipse      (650, 490, 730 + (10 * dx), 530);
    }
    }
//-------------------------------------------------------------------------
void text (int t)
    {
    if (t == 1)
    {
        txSetColor   (RGB (0, 0, 205));
        txSelectFont ("Comic Sans MS", 50);
        txTextOut    (420, 100, "Ќаша “ан€ громко плачет:");
        txTextOut    (420, 150, "”ронила в речку м€чик.");
    }
    else if (t == 2)
    {
        txSetColor   (RGB (0, 0, 205));
        txSelectFont ("Comic Sans MS", 50);
        txTextOut    (420, 100, "Ч “ише, “анечка, не плачь:");
        txTextOut    (420, 150, "Ќе утонет в речке м€ч.");
    }
    else
    {
        txSetColor   (RGB (0, 0, 205));
        txSelectFont ("Comic Sans MS", 50);
        txTextOut    (400, 100, "ƒавай вместе играть в м€чик!");
    }
    }
//-------------------------------------------------------------------------
void game (int x, int sign)
    {
    for (int lh = 0; lh <= 2; lh++)
        // ћ€чик летит от девочки к мальчику и обратно
        {
        decor ();
        girl  (450,                                      380, 1,   0,  30 * (lh % 2),    0,  30 * (lh % 2));
        man   (830,                                      330, 1, -15, -30 * (lh % 2), -170, -30 * (lh % 2), -50, -50);
        ball  (x + sign*100 * (lh % 3), 400 - 100 * (lh % 2), 1,   0,            0);
        text  (3);

        txSleep (450);
        txSetFillColor (TX_WHITE);
        txClear();
        }
    }
