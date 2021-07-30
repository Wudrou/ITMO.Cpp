#pragma once
#include "Dot.h"

class Triangle
{
public:
	Dot* a;
	Dot* b;
	Dot* c;
	Triangle(Dot* side1, Dot* side2, Dot* side3);
	Triangle(double x1, double y1, double x2, double y2, double x3, double y3);
	void ShowSides();
	double Perimeter();
	double Square();
};