#include <iostream>

using namespace std;

const int ROWS = 3; 
const int COLS = 3; 

int sumOfMaxValues2D(int array[ROWS][COLS]) {
    int sum = 0;
    for (int i = 0; i < ROWS; ++i) {
        int maxVal = array[i][0];
        for (int j = 1; j < COLS; ++j) {
            if (array[i][j] > maxVal) {
                maxVal = array[i][j];
            }
        }
        sum += maxVal;
    }
    return sum;
}

void convert2DTo1D(int array[ROWS][COLS], int result[ROWS * COLS]) {
    int index = 0;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            result[index++] = array[i][j];
        }
    }
}

int main() {
    int array2D[ROWS][COLS];

    cout << "Enter the elements of the 2D array (" << ROWS << "x" << COLS << "):" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cin >> array2D[i][j];
        }
    }

    int maxValuesSum = sumOfMaxValues2D(array2D);
    cout << "Sum of maximum values in each row: " << maxValuesSum << endl;

    int array1D[ROWS * COLS];
    convert2DTo1D(array2D, array1D);

    cout << "1D array: ";
    for (int i = 0; i < ROWS * COLS; ++i) {
        cout << array1D[i] << " ";
    }
    cout << endl;

    return 0;
}
