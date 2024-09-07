#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void Task2()
{
	string inputStr;
	cout << "Enter a string which at least 20 characters: " << "\n";
	getline(cin, inputStr);
	if (size(inputStr) < 20)
	{
		cout << "Come on man, you had one job. At least 20 characters." << "\n";
	}
	else
	{
		cout << "The string is " << size(inputStr) << " characters." << "\n";
		cout << "Substring: " << inputStr.substr(6, 6) << "\n";
		inputStr.replace(10, 2, "****");
		cout << "Replacing: " << inputStr << "\n";
		int pos = inputStr.find("****");
		cout << "Found **** at: " << pos << "\n";
		inputStr = inputStr.substr(0, pos);
		cout << "Erasing from * onward: " << inputStr << "\n";
	}
}

void Eg3()
{
	string prg;
	int word_count = 0;
	int space_pos = -1;
	cout << "Enter a sentence terminated by enter key:" << endl;
	getline(cin, prg);	// getline is used to get spaces in the input
	do {
		space_pos = prg.find(" ", space_pos + 1);
		if (space_pos > 0)
			word_count++;
	} while (space_pos > 0);
	word_count = word_count + 1;
	cout << "The sentence contains " << word_count << " words." << endl;
	system("Pause");

}

void Task1()
{
	cout << "Enter a username: " << "\n";
	const int size = 25;
	char username[size];
	cin.getline(username, size);
	cout << "\n";
	//checks if string contains "usr"
	bool containsUsr = false;
	for (int i = 0; i < size -2; i++)
	{
		if (username[i] == 'u')
		{
			if (username[i + 1] == 's')
			{
				if (username[i + 2] == 'r')
				{
					containsUsr = true;
				}
			}
		}
	}
	if (containsUsr)
	{
		cout << "Enter a password: " << "\n";
		char password[size];
		cin.getline(password, size);
		cout << "\n";

		char code[9] = { 'P', 'a', '5', '5', 'w', '0', 'r', 'd', '\0' };

		if (strcmp(password, code) == 0)
		{
			const int userLength = 24;
			const int passwordLength = 8;
			char identifier[userLength + passwordLength + 1] = "\0";
			strcat_s(identifier, username);
			strcat_s(identifier, "-\0");
			strcat_s(identifier, password);
			cout << identifier;
		}
		else
		{
			cout << "Sorry, the password is incorrect" << "\n";
		}
	}
	else
	{
		cout << "Sorry, the username must contain 'usr'" << "\n";
	}
}

void Eg2()
{
	char ch[6];
	int N = 5; //size of array excluding null char
	char temp;
	cin >> ch; //getting input from the user without spaces
	// sorting algorithm
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N - i - 1; j++)
			if (ch[j] > ch[j + 1])
			{
				temp = ch[j];
				ch[j] = ch[j + 1];
				ch[j + 1] = temp;
			}
	}
	//printing sorted array
	cout << ch << endl;
	system("pause");

}

void Eg1()
{
	char line[25];
	cout << "Type a line terminated by enter key";
	cin.getline(line, 25);
	cout << "You entered : " << line;

}

int main()
{
	Task2();
}

