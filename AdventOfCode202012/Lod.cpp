#include "Lod.h"
#include<iostream>
#include<string>
#include<string.h>
#include <string>
Lod::Lod(char smer,int x,int y) {
	this->smer = smer;
	this->x = x;
	this->y = y;
}
void Lod::info() {
	cout << "Lod je na ose x na pozici: " << x << "\n";
	cout << "Lod je na ose y na pozici: " << y << "\n";
	cout << "Lod smeruje na: " << smer << "\n";
}
