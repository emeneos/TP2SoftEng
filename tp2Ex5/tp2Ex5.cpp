// tp2Ex5.cpp : POINTER MAX VALUE
//

#include <iostream>
#include <cassert>
using namespace std;

int maxValue(int);


int  maxValue(int size) {
    int* array = new int[size];

    for (int i = 1; i <= size; i++) {
        cout << "Enter value " << i << " : ";
        cin >> array[i];
    }

    int max = array[0];
    for (int i = 1; i <= size; i++) {
        if (max < array[i]) {
            max = array[i];
        }
        std::cout << i;
    }
    // take the address of pointer using address of operator &
    int* pointer = &max;
    cout << "Maximum value is " << *pointer << endl;
    return 0;
}


int main()
{
    int size;

    cout << "Enter number of data values:";
    cin >> size;
    maxValue(size);
    return 0;
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
