#include <iostream>
#include <fstream>
using namespace std;

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
		
	}
	else
	{
		cout << "Sorry, the username must contain 'usr'";
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
	Task1();
}

