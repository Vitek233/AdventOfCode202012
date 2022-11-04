#include "Lod.h"
#include<iostream>
#include<string>
#include<string.h>
#include <string>
Lod::Lod(int smer,int x,int y) {
	this->smer = smer;
	this->x = x;
	this->y = y;
}
void Lod::info() {
	cout << "Lod je na ose x na pozici: " << x << "\n";
	cout << "Lod je na ose y na pozici: " << y << "\n";
	cout << "Lod smeruje na: " << smer << "\n";
}
void Lod::pohyb(char povel, int hodnota) {
	if (povel!='F') {
		switch (povel) {
		case 'N':y += hodnota;
			break;
		case 'E':x += hodnota;
			break;
		case 'S':y -= hodnota;
			break;
		case 'W':x -= hodnota;
			break;
		}
	}
	else {
		pohyb(zjistiSmer(smer), hodnota);
	}
}
void Lod::otoc(char rotace, int hodnota) {
	if (rotace == 'R')smer += hodnota;
	else smer -= hodnota;
	smer %= 360;
}
void Lod::naviguj(string cesta) {

}
char Lod::zjistiSmer(int smer) {
	switch (smer) {
		case 0:return'N';
			break;
		case 90:return'E';
			break;
		case 180:return'S';
			break;
		case 270:return'W';
			break;
	}
}
int main() {
	Lod lod = Lod(90, 0, 0);
	lod.info();
	return 1;
}
