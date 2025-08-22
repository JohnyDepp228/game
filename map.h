#ifndef MAP_H
#define MAP_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "posxy.h"

using namespace std;

int type() {
	int max = 3;
	int min = 1;
	return rand() % (max - min + 1)+ min;
}

void map(int a, int b, int res) {
	++b;
	bool chek = false;
	int x = 0, y = 0;
	gotoxy(x, y);
	for (int i = 0; i < a; i++) {
		cout << '*';
		x++;
		gotoxy(x, y);
	}
	if (res == 1) {
		gotoxy(a-=5,y);
		a += 5;
		for (int i = 0; i < a; i++) {
			cout << ' ';
		}
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
