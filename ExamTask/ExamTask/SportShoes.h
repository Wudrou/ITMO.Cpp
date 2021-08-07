#pragma once
#include <string>
#include <sstream>
#include "Shoes.h"

using namespace std;

class SportShoes : public Shoes
{
private:
	string model;
	float shoeSize = 0;
public:
	SportShoes(string setName, string setModel) : Shoes(setName)
	{
		model = setModel;
	}
	SportShoes(string setName, string setModel, float setShoeSize) : Shoes(setName)
	{
		model = setModel;
	}
	string get_place()
	{
		return "Спортивный зал";
	}

	string get_season()
	{
		return "всесезонный";
	}
	string get_info()
	{
		ostringstream info;
		info << "Для спортивного зала. Название: " << name << " Модель: " << model << " Размер обуви: " << shoeSize;
		return info.str();
	}
};