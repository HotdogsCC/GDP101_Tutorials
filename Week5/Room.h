#pragma once
#include <string>
#include <iostream>
using std::string;
using std::cout;

class Room
{
public:
	Room()
	{
		name = "Name";
		desc = "Description";
		exitsNum = 4;
		roomExits = new string[exitsNum];
	}
	Room(string _name, string _desc, int exits)
	{
		name = _name;
		desc = _desc;
		exitsNum = exits;
		roomExits = new string[exits];
	}

	void DisplayName() 
	{
		cout << name << "\n";
	}
	
	void DisplayDesc()
	{
		cout << desc << "\n";
	}

	void DisplayExits()
	{
		for (int i = 0; i < exitsNum; i++)
		{
			cout << roomExits[i] << "\n";
		}
	}

	void DisplayNumOfExits()
	{
		cout << exitsNum << "\n";
	}

	~Room()
	{
		delete[] roomExits;
		roomExits = nullptr;
	}

private:
	string name;
	string desc;
	string* roomExits;
	int exitsNum;
};

