#include <iostream>
#include "Rectangle.h"
#include "Room.h"
using namespace std;

void PracticeTask1()
{
    int arraySize = 1;
    float average = 0;
    int min = 0;
    int max = 0;
    cout << "Aye boss, how big did you want your array?" << "\n";
    cin >> arraySize;
    cout << "You want an array of size " << arraySize << "? I got you boss." << "\n";
    int* myArray = new int[arraySize];
    cout << "What numbers were in that array?" << "\n";
    cin >> myArray[0];
    average += myArray[0];
    min = myArray[0];
    max = myArray[0];
    for (int i = 1; i < arraySize; i++)
    {
        cin >> myArray[i];
        average += myArray[i];

        if (myArray[i] < min)
        {
            min = myArray[i];
        }

        if (myArray[i] > max)
        {
            max = myArray[i];
        }

    }

    cout << "Alright, I wrote down ";
    for (int i = 0; i < arraySize; i++)
    {
        cout << myArray[i] << ", ";
    }
    cout << "and uh that's about it." << "\n";

    average = average / arraySize;
    cout << "The average was " << average << endl;

    cout << "The smallest number was " << min << endl;

    cout << "The biggest number was " << max << endl;
    
    cout << "I probably should go delete that memory now, aye boss." << "\n";
    delete[] myArray;
}

void PracticeTask2()
{
    Room* basement = new Room("Basement", "OOOOOO spooky", 2);
    basement->DisplayName();
    basement->DisplayDesc();
    basement->DisplayNumOfExits();
    delete basement;

    Room* myRooms = new Room[69];
    delete[] myRooms;
}

int main()
{
    //PracticeTask1();
    PracticeTask2();

    /*
    int* intPtr = new int;

    std::cout << intPtr << "\n";

    *intPtr = 5;

    std::cout << *intPtr << "\n";

    delete intPtr;
    intPtr = nullptr;

    if (intPtr == nullptr)
    {
        std::cout << "The pointer is null" << "\n";
    }

    */

    /*int size = 10;
    int* array = new int[size];

    for (int i = 0; i < size; i++)
    {
        array[i] = i;
    }

    delete[] array;
    array = nullptr;*/

    /*
    Rectangle* rect = new Rectangle();

    rect->SetWidthHeight(3, 4);

    std::cout << "Rect area: " << rect->Area() << "\n";

    delete rect;
    rect = nullptr; */

    system("pause");

    return 0;
}