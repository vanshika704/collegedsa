#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    
    // Dynamically allocate memory for 2D matrix
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }
    
    // Input matrix elements
    cout << "Enter elements of the matrix: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    
   
    cout << "Matrix elements are: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
   
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
int zeroarray(int arr[],int n){
    for (int i = 0  ; i<  n ; i++){int mini = arr[i];
        for (int j = 0 ; j < n ; j++){

        }
    }
}