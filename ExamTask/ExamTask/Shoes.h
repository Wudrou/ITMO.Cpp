#pragma once
#include <string>
using namespace std;

class Shoes
{
protected:
	string name;
	Shoes(string setName) : name(setName) {}

public:
	virtual string get_place() = 0;
	virtual string get_season() = 0;

	string get_name()
	{
		return name;
	}
};