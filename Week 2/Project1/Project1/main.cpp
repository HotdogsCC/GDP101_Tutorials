#include<iostream>
using namespace std;

int main()
{
	int my2DArray[4][4] = {
		3, 5, 6, 5,
		10, 4, 3, 9,
		1, 8, 7, 5,
		4, 3, 5, 2
	};

	cout << "Input 16 values for the 2D 4x4 array: " << endl << endl;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> my2DArray[i][j];
		}
	}

	int leftSum = 0;
	for (int i = 0; i < 4; i++)
	{
		leftSum += my2DArray[i][i];
	}
	
	int rightSum = 0;
	for (int i = 0; i < 4; i++)
	{
		rightSum += my2DArray[3 - i][i];
	}

	if (leftSum > rightSum)
	{
		cout << "left is bigger";
	}
	else
	{
		cout << "right is bigger";
	}

	return 0;
}

/* bubble sort
#include<iostream>
using namespace std;
int main()
{
	//Define our data
	const int array_size = 50;
	int array_to_be_sorted[array_size] = {
		14,65,63,1,54,
		89,84,9,98,57,
		71,18,21,84,69,
		28,11,83,13,42,
		64,58,78,82,13,
		9,96,14,39,89,
		40,32,51,85,48,
		40,23,15,94,93,
		35,81,1,9,43,
		39,15,17,97,52
	};

	cout << "Unsorted" << endl;
	for (int i = 0; i < array_size; ++i)
	{
		cout << array_to_be_sorted[i] << ",\t";
		if (i % 10 == 9) cout << endl;
	}

	cout << endl << endl;

	//Bail for single element or invalid indices
	if (array_size < 2) return 0;

	bool sorted = false;
	while (!sorted)
	{
		sorted = true;
		int temp;
		for (int i = 0; i < array_size - 1; ++i)
		{
			if (array_to_be_sorted[i] > array_to_be_sorted[i + 1])
			{
				temp = array_to_be_sorted[i];
				array_to_be_sorted[i] = array_to_be_sorted[i + 1];
				array_to_be_sorted[i + 1] = temp;

				sorted = false;
			}
		}
	}
	cout << "Bubble sort" << endl;
	for (int i = 0; i < array_size; ++i)
	{
		cout << array_to_be_sorted[i] << ",\t";
		if (i % 10 == 9) cout << endl;
	}

	cout << endl << endl;
	system("pause");
	return 0;

}

*/

/* my solution to practice problem 2
#include<iostream>
using namespace std;
int main()
{
	int arrayA[10];
	int arrayB[10];

	//declaring arrays
	for (int i = 0; i < 10; i++)
	{
		arrayA[i] = 0;
		arrayB[i] = 0;
	}

	cout << "Please enter values in array A: " << endl << endl;

	for (int i = 0; i < 10; i++)
	{
		cin >> arrayA[i];
		arrayB[i] = arrayA[i] * arrayA[i];
	}

	cout << endl << "The values in Array B are: " << endl << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << arrayB[i] << " ";
	}

	cout << endl << "Values in Arra B which are divisible by 3: " << endl << endl;

	for (int i = 0; i < 10; i++)
	{
		if (arrayB[i] % 3 == 0)
		{
			cout << arrayB[i] << " ";
		}
	}
}
*/

/* walkthrough for taking in student grades
#include<iostream> 
using namespace std;
int main()
{
	const int totalStudent = 5;
	float studentMarks[totalStudent];
	float sum = 0.0;
	float average = 0.0;

	cout << "Enter Marks of 5 Students" << endl;
	for (int i = 0; i < totalStudent; i++)
	{
		cout << "Enter Marks of student " << i + 1 << " = ";
		cin >> studentMarks[i];
		sum += studentMarks[i];
	}
	average = sum / totalStudent;
	cout << "\nThe average of all student marks = " << average << endl;
	cout << "Following students are above average" << endl;
	for (int i = 0; i < totalStudent; i++)
	{
		if (average < studentMarks[i])
		{
			cout << "Student " << i + 1 << " got " << studentMarks[i] << " marks" << endl;
		}
	}

	system("Pause");
	return 0;
}
*/

/* my solution to the divisor challenge problem
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
*/

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