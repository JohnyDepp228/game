#ifndef MOVEMENT_H 
#define MOVEMENT_H
#include <iostream>
#include <conio.h>

using namespace std;


void movement(int& a, int& b) {
    char ch = _getch();
    switch (ch) {
    case 'w':--b; break;
    case 'a':--a; break;
    case 's':++b; break;
    case 'd':++a; break;
    }
}

#endif 
#pragma once
