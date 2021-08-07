#pragma once
#include <string>
#include <sstream>
#include "SeasonalShoes.h"

class SummerSeasonalShoes : public SeasonalShoes
{
private:
	string model;
	float shoeSize = 0;
public:
	SummerSeasonalShoes(string setName, string setModel) : SeasonalShoes(setName, "лето")
	{
		model = setModel;
	}
	SummerSeasonalShoes(string setName, string setModel, float setShoeSize) : SeasonalShoes(setName, "лето")
	{
		model = setModel;
		shoeSize = setShoeSize;
	}
	string get_info()
	{
		ostringstream info;
		info << "Летняя обувь. Название: " << name << " Модель: " << model << " Размер обуви: " << shoeSize;
		return info.str();
	}
};