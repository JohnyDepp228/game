#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
#include "movment.h"
#include "character.h"
#include "map.h"

using namespace std;
void gotoxy(int x, int y);
void movement(int& a, int& b);
void character(int a, int b);

int main()
{
    setlocale(LC_ALL, "RU");
    int(*ptr)() = type;
    cout << ptr();
    //map(40, 8,ptr);
    //character(5, 5);
    return 0;
}

