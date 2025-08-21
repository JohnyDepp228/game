#ifndef CHARACTER_H 
#define CHARACTER_H
#include <iostream>
#include <windows.h>
#include "movment.h"
#include "posxy.h"

using namespace std;

void character(int a, int b) {
    gotoxy(a, b);
    int stA = a;
    int stB = b;
    cout << '#';
    while (true) {
        if (a > 10 || a < 1) {
            system("cls");
            gotoxy(stA,b);
            a = stA;;
            cout << '#';
        }
        if ( b > 10 || b < 1) {
            system("cls");
            gotoxy(a, stB);
            b = stB;
            cout << '#';
        }
        movement(a, b);
        system("cls");
        gotoxy(a, b);
        cout << '#';
        Sleep(200);
    }
}

#endif  CHARACTER_H 
#pragma once
