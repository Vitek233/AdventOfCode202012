#pragma once
#include<iostream>
#include<string>
using namespace std;
class Lod
{
private:
	int x;
	int y;
	char smer;

public:
	Lod(char smer, int x, int y);
	void pohyb(char povel,int hodnota);
	void otoc(char smer, int hodnota);
	void naviguj(string cesta);
	void info();
};

