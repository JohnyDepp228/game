#ifndef MAP_H
#define MAP_H

#include <iostream>
#include "posxy.h"
using namespace std;

void map(int a, int b) {
	++b;
	int x = 0, y = 0;
	gotoxy(x, y);
	for (int i = 0; i < a; i++) {
		cout << '*';
		x++;
		gotoxy(x, y);
	}
	y = b;
    x = 0;
    gotoxy(x, y);
	for (int i = 0; i < a; i++) {
		
		cout << '*';
		x++;
		gotoxy(x, y);
	}
	x = 0;
	y = 0;
	gotoxy(x, y);
	for (int i = 0; i < b; i++) {
		cout << '*';
		y++;
		gotoxy(x, y);
	}
	x = a;
	y = 0;
	gotoxy(x, y);
	++b;
	for (int i = 0; i < b; i++) {
		cout << '*';
		y++;
		gotoxy(x, y);
	}
}

#endif MAP_H
#pragma once
