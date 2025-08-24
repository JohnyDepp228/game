#ifndef CHARACTER_H 
#define CHARACTER_H
#include <iostream>
#include <windows.h>
#include "movment.h"
#include "posxy.h"
#include "map.h"

using namespace std;

void character(int a, int b) {
    int sizeX = 20;
    int sizeY = 10;
    int posX = 0;
    int posY = 6;
    map(sizeX, sizeY, posX, posY);
    gotoxy(a, b);
    int stA = a;
    int stB = b;
    cout << '#';
    while (true) {
        if (a > sizeX || a < 1) {
            system("cls");
            map(sizeX,sizeY,posX,posY);
            gotoxy(stA,b);
            a = stA;
            cout << '#';
        }
        if ( (b > (posY*2) - 1) || (b < posY + 1)) {
            system("cls");
            map(sizeX,sizeY,posX,posY);
            gotoxy(a, stB);
            b = stB;
            cout << '#';
        }
        movement(a, b);
        system("cls");
        map(sizeX, sizeY, posX, posY);
        gotoxy(a, b);
        cout << '#';
        Sleep(200);
    }
}
#endif  CHARACTER_H 
#pragma once
