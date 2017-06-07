#pragma once
#include <string>
class Hero
{
private:
	std::string _name;
	int _health = 100;
public:
	Hero();
	~Hero();
};

