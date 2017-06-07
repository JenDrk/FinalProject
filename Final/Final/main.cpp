#include <iostream>
#include <string>
#include <memory>
#include "Team.h"
using namespace std;

int main()
{
	cout << "Welcome to the game. Please name your team." << endl;
	string name;
	getline(cin, name);
	auto team = make_shared<Team>(name);
	int choice = -1;
	while (choice != 0)
	{
		system("cls");
		cout << "You are on team " << team->GetName() << endl;

		cout << "1) Create Hero" << endl;
		cout << "2) Battle" << endl;
		cout << "3) Display Info" << endl;

		switch (choice)
		{
		case 1: 

		}
	}


	return 0;
}