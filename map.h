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

void map(int sizeX,int sizeY,int posX,int posY) {
	int arrRes[4];
	int prev1 = 0;
	int res = type();
	for (int i = 0; i < 4; i++) {
		res = type();
		while (res == prev1) {
			res = type();
		}
		arrRes[i] = res;
		prev1 = res;
	}
	gotoxy(posX, posY);
	for (int i = 0; i < sizeX; i++) {
		cout << '*';
		posX++;
		gotoxy(posX, posY);
	}
	posX -= sizeX;
	gotoxy(0, posY);
	sizeY /= 2;
	sizeY += 2;
	for (int i = 0; i < sizeY; i++) {
		cout << '*';
		posY++;
		gotoxy(posX, posY);
	}
	--posY;
	gotoxy(posX, posY);
	for (int i = 0; i < sizeX; i++) {
		cout << '*';
		posX++;
		gotoxy(posX, posY);
	}
}

void mapDown(int sizeX, int sizeY, int posX, int posY) {
	gotoxy(posX, posY);
	for (int i = 0; i < sizeX; i++) {
		cout << '*';
		posX++;
		gotoxy(posX, posY);
	}
	posX -= sizeX;
	gotoxy(posX, posY);
	sizeY /= 2;
	sizeY += 2;
	for (int i = 0; i < sizeY; i++) {
		cout << '*';
		posY++;
		gotoxy(posX, posY);
	}
	gotoxy(posX, posY);
	for (int i = 0; i < sizeX; i++) {
		cout << '*';
		posX++;
		gotoxy(posX, posY);
	}
	posX -= sizeX;
	posY -= sizeY;
	posX += sizeX;
	gotoxy(posX, posY);
	for (int i = 0; i < sizeY; i++) {
		cout << '*';
		posY++;
		gotoxy(posX, posY);
	}
}

void mapUp(int sizeX, int sizeY, int posX, int posY) {
	gotoxy(posX, posY);
	for (int i = 0; i < sizeX; i++) {
		cout << '*';
		posX++;
		gotoxy(posX, posY);
	}
	posX -= sizeX;
	gotoxy(posX, posY);
	for (int i = 0; i < sizeY; i++) {
		cout << '*';
		posY--;
		gotoxy(posX, posY);
	}
	//sizeX -= 7;
	gotoxy(posX, posY);
	for (int i = 0; i < sizeX; i++) {
		cout << '1';
		posX++;
		gotoxy(posX, posY);
	}
	posY += sizeY;
	sizeY -= 7;
	gotoxy(posX, posY);
	for (int i = 0; i < sizeY; i++) {
		cout << '*';
		posY--;
		gotoxy(posX, posY);
	}
	posY += sizeY;
	gotoxy(posX, posY);
}

#endif MAP_H
#pragma once
