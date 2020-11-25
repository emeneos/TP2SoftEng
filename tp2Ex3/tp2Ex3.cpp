// tp2Ex3.cpp : sort elements.
//

#include <iostream>
using namespace std;


void burbleSorting(int a[])
{
    int temp;
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++)
        {
            if (a[j] < a[i]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

    }
    cout << "Sorted Element List ...\n";
    for (int i = 0; i < 10; i++) {
        cout << a[i] << "\t";
    }

}
int main()
{
    int a[10];
    
    cout << "Please, input 10 integers" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Array [" << i << "]" << endl;
        cin >> a[i];
    }
    burbleSorting(a);

}
