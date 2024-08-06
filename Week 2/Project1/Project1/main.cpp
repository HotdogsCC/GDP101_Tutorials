#include<iostream>
using namespace std;
int main()
{
	int p;
	int q;

	cout << "Enter first number (P): ";
	cin >> p;
	cout << "Enter second number (Q): ";
	cin >> q;

	int maxDivisor = 0;
	int numOfDivisors = 0;

	const int numOfIterations = q - p;

	//iterates through each number from p to q
	for (; p <= q; p++)
	{
		int loopNumOfDivisors = 0;
		//iterates through each possible number p could be divided by
		for (int i = p; i > 0; i--)
		{
			//if number p is divisible by number i, it has a factor.
			if (p % i == 0)
			{
				loopNumOfDivisors++;
			}
		}

		//Checks if this number has more divisors than the current top
		if (loopNumOfDivisors > numOfDivisors)
		{
			maxDivisor = p;
			numOfDivisors = loopNumOfDivisors;
		}
	}

	cout << maxDivisor << " has maximum of " << numOfDivisors << " divisors.";
	return 0;
}

/* prints hello world 27 times cause of the nested for loops. 3*3*3
#include<iostream> 
using namespace std;
int main()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j <= 3; j++)
		{
			for (int k = 0; k < 3; k++)
				cout << "\nHello World!";
		}
	}
	return 0;
}
*/

/* good code
#include<iostream> 
using namespace std;
int main()
{
	for (int j = 0; j < 6; j++)
	{
		for (int i = 2; i <= 50; i += 2)
			cout << i << ",";
		cout << endl;
	}
	return 0;
}
*/


/* Bad code
#include<iostream> 
using namespace std;
int main()
{
	for (int i = 2; i <= 50; i += 2)
		cout << i << ",";
	cout << endl;
	for (int i = 2; i <= 50; i += 2)
		cout << i << ", ";
	cout << endl;
	for (int i = 2; i <= 50; i += 2)
		cout << i << ", ";
	cout << endl;
	for (int i = 2; i <= 50; i += 2)
		cout << i << ", ";
	cout << endl;
	for (int i = 2; i <= 50; i += 2)
		cout << i << ", ";
	cout << endl;
	for (int i = 2; i <= 50; i += 2)
		cout << i << ", ";
	return 0;
}
*/