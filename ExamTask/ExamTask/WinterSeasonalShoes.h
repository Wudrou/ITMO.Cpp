#pragma once
#include <string>
#include <sstream>
#include "SeasonalShoes.h"

class WinterSeasonalShoes : public SeasonalShoes
{
private:
	string model;
	float shoeSize = 0;
public:
	WinterSeasonalShoes(string setName, string setModel) : SeasonalShoes(setName, "зима")
	{
		model = setModel;
	}
	WinterSeasonalShoes(string setName, string setModel, float setShoeSize) : SeasonalShoes(setName, "зима")
	{
		model = setModel;
		shoeSize = setShoeSize;
	}
	string get_info()
	{
		ostringstream info;
		info << "Зимняя обувь. Название: " << name << " Модель: " << model << " Размер обуви: " << shoeSize;
		return info.str();
	}

};
