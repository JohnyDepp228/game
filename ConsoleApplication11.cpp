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
    int prev1 = 0;
    int res = type();
    int arrRes[4];
    for (int i = 0; i < 4; i++) {
        res = type();
        while (res == prev1) {
            res = type();
        }
        arrRes[i] = res;
        prev1 = res;
    }
    map(20, 5, arrRes[1]);
    cout << arrRes[1] << endl;
    cout << arrRes[0] << endl;
    cout << arrRes[2];
    //cout << res << endl;
    // сделать массив хранящий res и его передавать в map для построения карты 
    //character(5, 5);
    return 0;
}

