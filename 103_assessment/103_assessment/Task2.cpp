// 103_assessment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "task2.h"
//Write a program to sum the non - negative values in the list.
//Pass an array to the function using a pointerand return the sum.
//Allow the user to feed list elements.
//(Hint: Function arguments could be the array pointer and the size of the array)

void sumValues(int &arrPtr, int size) {
    arrSize = size;
    arrRef = arrPtr[0];
    for (int i = 0; i < size; i++) {
        if (i < size - 1) {
            cout << arrRef[i] << " + ";
        }
        else {
            cout << arrRef[i] << "\n";
        }
        if (arrRef[i] <= 0) {
            sum += 0;
        }
        else {
        sum += arrRef[i];
        }
        
    }
    cout << "Sum of array: " << sum;
}

void createArr() {

    for (int i = 0; i < arrSize; i++) {
        cout << "enter a value to array: ";
        cin >> arr[i];
    }
    arrRef = arr;
    sumValues(&arrRef, arrSize);
}

int main()
{
    cout << "calculating positive integers!.......\n\n";
    createArr();
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
