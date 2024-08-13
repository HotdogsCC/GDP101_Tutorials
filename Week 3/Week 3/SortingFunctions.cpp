#include "SortingFunctions.h"

void BubbleSort(int array[5], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                SwapByRef(array[j], array[j + 1]);
            }
        }
    }
}

void SwapByVal(int a, int b)
{
    int temp1 = a;
    a = b;
    b = temp1;
}

void SwapByRef(int& a, int& b)
{
    int temp1 = a;
    a = b;
    b = temp1;
}