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
    srand(time(0));
    //character(1, 9);
    mapUp(5, 10, 5, 15);
    
    return 0;
   
}

