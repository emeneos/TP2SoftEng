// tp2Ex7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int* bubbleSortedList(const int* list, int size) {

    int* copyList = new int[size];
    for (int i = 0; i < size; i++) {
        copyList[i] = list[i];
    }
    int temp;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++)
        {
            if (copyList[j] < copyList[i]) {
                temp = copyList[i];
                copyList[i] = copyList[j];
                copyList[j] = temp;
            }
        }
    }
    return copyList;
}


int main()
{
    std::cout << "Enter list size: \n";
    int size = 0;
    cin >> size;

    int* array = new int[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter value " << i << " : ";
        cin >> array[i];
    }
    int* sortedList = bubbleSortedList(array, size);
    std::cout << "Reading Sorted List: \n";

    for (int i = 0; i < size; i++) {
        std::cout << sortedList[i] << "\n";
    }
    delete[] sortedList;
    delete[] array;
}

