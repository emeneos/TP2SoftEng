// tp2Ex6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void pointerInArray()
{
    int a[5];
    int* pntr = a;
    cout << "Input 5 values for array: " << endl;
    for (int i = 1; i <= 5; i++) {
        cout << "Enter value " << i << " : ";
        cin >> *(pntr + i);
    }
    cout << "\n";

    cout << "Printing array: " << endl;
    for (int i = 1; i <= 5; i++) {
        cout << *(pntr + i) << "\n";
    }
}
int main()
{
    pointerInArray();
}

