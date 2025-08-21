#ifndef POSXY_H
#define POSXY_H
#include <iostream>
#include <windows.h>

void gotoxy(int x, int y) {
    COORD p = { x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}

#endif POSXY_H
#pragma once
