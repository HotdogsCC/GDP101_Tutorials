#include <iostream>
using namespace std;
int stack[100], n = 100, top = -1;
void push(int val) {
	if (top >= n - 1)
		cout << "Stack Overflow" << endl;
	else {
		top++;
		stack[top] = val;
	}
}
void pop() {
	if (top <= -1)
		cout << "Stack Underflow" << endl;
	else {
		cout << "The popped element is " << stack[top] << endl;
		top--;
	}
}
void display() {
	if (top >= 0) {
		cout << "Stack elements are:";
		for (int i = top; i >= 0; i--)
			cout << stack[i] << " ";
		cout << endl;
	}
	else
		cout << "Stack is empty";
}
int main() {
	int ch, val;
	cout << "1) Push in stack" << endl;
	cout << "2) Pop from stack" << endl;
	cout << "3) Display stack" << endl;
	cout << "4) Exit" << endl;
	do {
		cout << "Enter choice: " << endl;
		cin >> ch;
		switch (ch) {
		case 1: {
			cout << "Enter value to be pushed:" << endl;
			cin >> val;
			push(val);
			break;
		}
		case 2: {
			pop();
			break;
		}
		case 3: {
			display();
			break;
		}
		case 4: {
			cout << "Exit" << endl;
			break;
		}
		default: {
			cout << "Invalid Choice" << endl;
		}
		}
	} while (ch != 4);
	return 0;
}

/*
#include<iostream>
using namespace std;

void input_Array(int* ptr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Enter student's marks : ";
		cin >> *ptr;
		ptr++;
	}
}
void find_Average(int* ptr, int size, int* avg)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum = sum + *ptr;
		ptr++;
	}
	*avg = sum / size;
}
int main()
{
	int Arr[10];
	int average;
	input_Array(Arr, 10);
	find_Average(Arr, 10, &average);
	cout << endl << "Average marks are " << average << endl;
	system("Pause");
	return 0;
}
*/

/*
double areaCalc(double* inputRadius)
{
	return *inputRadius * *inputRadius * 3.14;
}

int main()
{
	double radius[10];
	double area[10];

	cout << "Enter the 10 radi: ";
	for (int i = 0; i < 10; i++)
	{
		cin >> radius[i];
	}

	for (int i = 0; i < 10; i++)
	{
		area[i] = areaCalc(&radius[i]);
		cout << area[i] << " ";
	}
}
*/

/* Practice task 1
int main()
{	
	int values[10];
	cout << "Enter 10 whole numbers: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> values[i];
		if (values[i] % 2 != 0)
		{
			values[i]++;
		}
	}

	cout << "Outputted even numbers: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << values[i] << " ";
	}
	return 0;
}
*/

























/*
int main()
{
	float a = 0, b = 0, temp = 0;
	float* a_ptr = &a, * b_ptr = &b, * temp_ptr = &temp;

	cout << "Enter value for a : ";
	cin >> *a_ptr;
	cout << endl;
	cout << "Enter value for b : ";
	cin >> b;

	//swaping the variables
	*temp_ptr = *a_ptr;
	*a_ptr = *b_ptr;
	*b_ptr = *temp_ptr;
	cout << endl << "Result after swapping" << endl;
	cout << " a = " << a << ", b = " << *b_ptr << endl;
	system("Pause");
	return 0;
}
*/
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
