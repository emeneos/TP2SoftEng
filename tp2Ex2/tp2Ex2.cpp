// tp2Ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
using namespace std;

void min_max(int arr[])
{
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < 10; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    cout << "Max Value: " << max << endl;
    cout << "Min value:" << min << endl;
}

int maxRepetition(int arr[]) {
    int max_count = 0;

    for (int i = 0; i < 10; i++)
    {
        int count = 1;
        for (int j = i + 1; j < 10; j++)
            if (arr[i] == arr[j])
                count++;
        if (count > max_count)
            max_count = count;
    }

    for (int i = 0; i < 10; i++)
    {
        int count = 1;
        for (int j = i + 1; j < 10; j++)
            if (arr[i] == arr[j])
                count++;
        if (count == max_count)
            return arr[i];
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
    min_max(a);
    cout<<"Max repetition is in number: "+maxRepetition(a)<<endl;
  
}

