#pragma once
#include<iostream>
#include<string>
using namespace std;
class Lod
{
private:
	int x;
	int y;
	int smer;
	char zjistiSmer(int smer);

public:
	Lod(int smer, int x, int y);
	void pohyb(char povel,int hodnota);
	void otoc(char rotace, int hodnota);
	void naviguj(string cesta);
	void info();
};

