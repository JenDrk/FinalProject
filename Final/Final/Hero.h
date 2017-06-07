#pragma once
#include <string>
class Hero
{
private:
	std::string _name;
	int _health = 100;
	int _level = 1;
	int _xp;
public:
	Hero();
	~Hero();

	std::string virtual Attack() { return _name + "attacks!"; }
};

