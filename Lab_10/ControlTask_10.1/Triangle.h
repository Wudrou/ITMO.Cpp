#pragma once
#include "Dot.h"

class Triangle
{
private:
	Dot a;
	Dot b;
	Dot c;
public:
	Triangle(Dot, Dot, Dot);
	void ShowSides();
	double Perimeter();
	double Square();
};