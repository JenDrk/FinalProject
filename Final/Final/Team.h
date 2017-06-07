#pragma once
#include <string>
class Team
{
private:
	int _points = 0;
	std::string _name;
public:
	Team(std::string name);
	~Team();

	std::string GetName() const { return _name; }
};

