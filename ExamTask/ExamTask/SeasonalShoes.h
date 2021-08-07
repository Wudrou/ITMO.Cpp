#pragma once
#include <iostream>
#include <string>
#include "Shoes.h"

class SeasonalShoes : public Shoes
{
protected:
	string season;
	SeasonalShoes(string setName, string setSeason) : Shoes(setName)
	{
		season = setSeason;
	}
public:

	string get_place()
	{
		return "улица";
	}

	string get_season()
	{
		return season;
	}
};