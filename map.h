#ifndef MAP_H
#define MAP_H

#include <iostream>
#include <random>
#include "posxy.h"

using namespace std;
int type() {
	static mt19937 rng(random_device{}());
	static uniform_int_distribution<int>dist(1, 3);
	return dist(rng);
}

void map(int a, int b, int(*ptr)()) {
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
