// 103_assessment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "task3.h"
//Write a program to add two 3x3 matrices called A and B and store the resultant into matrix C.
//Multiply the resultant matrix C by 3 and display the result.
//Assign the values to the A and B matrixes during the declaration.
//Display the output structure.

//1.create matrix a and b with user input for the values
//2. create matrix c;
//3.function to add a and b
//4. function to multiply c by 3 and display
//5. display to show all 

void addMatrices() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrixC[i][j] += (matrixA[i][j] + matrixB[j][i]);
        }
    }
    cout << "Matrix A + Matrix B = Matrix C: \n";
    displayC();
}

void multiplyC() {
    cout << "Matrix C * 3: " ;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrixC[j][i] *= 3;
        }
    }
    displayC();
}

void displayC() {
    std::cout << "\n\nMatrix C" << "  c0" << "\t" << "c1" << "\t" << "c2" << "\n";
    std::cout << "\tr0 " << matrixC[0][0] << "\t" << matrixC[0][1] << "\t" << matrixC[0][2] << "\n";
    std::cout << "\tr0 " << matrixC[1][0] << "\t" << matrixC[1][1] << "\t" << matrixC[1][2] << "\n";
    std::cout << "\tr0 " << matrixC[2][0] << "\t" << matrixC[2][1] << "\t" << matrixC[2][2] << "\n";
}
void displayB() {
    std::cout << "\n\nMatrix B" << "  c0" << "\t" << "c1" << "\t" << "c2" << "\n";
    std::cout << "\tr0 " << matrixB[0][0] << "\t" << matrixB[0][1] << "\t" << matrixB[0][2] << "\n";
    std::cout << "\tr0 " << matrixB[1][0] << "\t" << matrixB[1][1] << "\t" << matrixB[1][2] << "\n";
    std::cout << "\tr0 " << matrixB[2][0] << "\t" << matrixB[2][1] << "\t" << matrixB[2][2] << "\n";
}
void displayA() {
    std::cout << "\n\nMatrix A" << "  c0" << "\t" << "c1" << "\t" << "c2" << "\n";
    std::cout << "\tr0 " << matrixA[0][0] << "\t" << matrixA[0][1] << "\t" << matrixA[0][2] << "\n";
    std::cout << "\tr0 " << matrixA[1][0] << "\t" << matrixA[1][1] << "\t" << matrixA[1][2] << "\n";
    std::cout << "\tr0 " << matrixA[2][0] << "\t" << matrixA[2][1] << "\t" << matrixA[2][2] << "\n";
}

int main()
{
    int i, j;
    cout << "matrices.......\n\n";
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << "Enter value into matrix A: [" << i << "][" << j << "]\n";
            cin >> matrixA[i][j];
        }      
    }
    displayA();
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << "Enter value into matrix B: [" << i << "][" << j << "]\n";
            cin >> matrixB[i][j];
        }
        
    }
    displayB();
    addMatrices();
    multiplyC();
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
