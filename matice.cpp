#include <iostream>

using namespace std;

void printMatrix(int mat[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void addMatrices(int A[3][3], int B[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

void subtractMatrices(int A[3][3], int B[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
}

void multiplyMatrices(int A[3][3], int B[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void divideMatrices(int A[3][3], int B[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (B[i][j] != 0) {
                result[i][j] = A[i][j] / B[i][j];
            } else {
                cout << "Nelze dělit nulou." << endl;
                return;
            }
        }
    }
}

int main() {
    
    int A[3][3] = {{1, 5, 3}, {9, 1, 6}, {8, 4, 9}};
    int B[3][3] = {{2, 8, 3}, {6, 2, 8}, {3, 2, 2}};

    int resultAdd[3][3], resultSubtract[3][3], resultMultiply[3][3], resultDivide[3][3];

    addMatrices(A, B, resultAdd);
    cout << "Sčítání: " << endl;
    printMatrix(resultAdd);

    subtractMatrices(A, B, resultSubtract);
    cout << "Odčítání: " << endl;
    printMatrix(resultSubtract);

    multiplyMatrices(A, B, resultMultiply);
    cout << "Násobení: " << endl;
    printMatrix(resultMultiply);

    divideMatrices(A, B, resultDivide);
    cout << "Dělení: " << endl;
    printMatrix(resultDivide);

    return 0;
}