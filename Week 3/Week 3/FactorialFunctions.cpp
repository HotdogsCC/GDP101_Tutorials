#include "FactorialFunctions.h"

int FactorialLoop(int n)
{
    int facto = 1;
    for (int i = 1; i <= n; i++)
    {
        facto *= i;
    }
    return facto;
}

int FactorialRecursive(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    return n * FactorialRecursive(n - 1);
}
