// Week 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SortingFunctions.h"
#include "FactorialFunctions.h"

int MultiplyTwoNums(int a, int b)
{
    return a * b;
}

void PrintABC(int a, int b, int c);




int main()
{
    //Declares int pointer as null
    int* pointer = 0;

    //Checks pointer is of type nullptr
    if (pointer == nullptr)
    {
        std::cout << "Null";
    }

    /*std::cout << "2 * 18 is " << MultiplyTwoNums(2, 18) << "\n";

    std::cout << "Hello World!\n";*/

    /*int first, second, result;

    std::cout << "a = ";
    std::cin >> first;

    std::cout << "b = ";
    std::cin >> second;

    result = MultiplyTwoNums(first, second);

    std::cout << first << " * " << second << " = " << result << "\n"; */

    int a = 50;
    int b = 60;

    int& c = a;
    PrintABC(a, b, c);
    c = 18;
    PrintABC(a, b, c);
    a = 36;
    b = 80;
    PrintABC(a, b, c);

    SwapByVal(a, b);
    
    PrintABC(a, b, c);

    SwapByRef(a, b);

    PrintABC(a, b, c);

    std::cout << "Factorial 25 is: " << FactorialLoop(8) << "\n";
    std::cout << "Factorial 26 is: " << FactorialRecursive(9) << "\n";

}

void PrintABC(int a, int b, int c)
{
    std::cout << "a = " << a << ", b = " << b << ", c = " << c << "\n";
}






// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
