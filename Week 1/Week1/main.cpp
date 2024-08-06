#include <iostream>
#include <string>

using std::string;

int main() 
{
	/*std::cout << "Hello, world!\n";
	std::cin.get();

	int menuItem;
	std::cout << "Enter a menu option (1 to 5): ";
	std::cin >> menuItem;

	std::cout << "You selected " << menuItem;*/

	/*std::cout << "\x1B[31mName\t|\tCharlie Campbell\n";
	std::cout << "DOB\t|\tNice try, scammers\n";
	std::cout << "City\t|\tSydney\n";*/

	int integer = 50;
	float floatingPoint = 50.1;
	char character = 'j';
	bool boolean = true;
	long longerNumber = 60; // twice the size of a normal int
	short shorterNumber = 1; // half the size of a normal int

	string myString = "banana";

	if (shorterNumber == 1)
	{
		shorterNumber = shorterNumber - 1;
	}
	else if (shorterNumber > 5)
	{
		shorterNumber = 5;
	}
	else
	{
		shorterNumber = 1;
	}

	if (integer == 50)
	{
		if (longerNumber == 60)
		{
			// This means both are true
		}
	}

	// logical and
	if (integer == 50 && longerNumber == 60)
	{
		//runs if both are true
	}

	if (integer == 50 || longerNumber == 61)
	{
		//runs if at least 1 is true
	}

	//Logical NOT statement
	if (integer != 50)
	{
		// integer is anything but 50
	}

	switch (longerNumber)
	{
	case 50:
		std::cout << "meow";
		break;
	case 51:
		std::cout << "meoww";
		break;
	case 52:
		std::cout << "meowww";
		break;


	default: //do this if all other cases fail
		std::cout << "grrr";
		break;
	}

	for (int i = 0; i < 50; ++i)
	{
		std::cout << "Number is " << i << std::endl;
	}

	bool isAtFifty = false;
	int i = 0;
	while (!isAtFifty)
	{
		std::cout << "Number in while loop is: " << i << std::endl;
		i++;
	}

	return 0;
}