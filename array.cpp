#include <iostream>
using namespace std;

bool search(int array[9][9], int target)
{
    for (int i = 0; i < 9; ++i)
    {
        for (int j = 0; j < 9; ++j)
        {
            if (array[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

void traverse(int array[9][9])
{
    for (int i = 0; i < 9; ++i)
    {
        for (int j = 0; j < 9; ++j)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

int sumElements(int array[9][9])
{
    int sum = 0;
    for (int i = 0; i < 9; ++i)
    {
        for (int j = 0; j < 9; ++j)
        {
            sum += array[i][j];
        }
    }
    return sum;
}

void insertElement(int array[9][9], int row, int col, int value)
{
    if (row >= 0 && row < 9 && col >= 0 && col < 9)
    {
        array[row][col] = value;
    }
    else
    {
        cout << "Invalid position!" << endl;
    }
}

void deleteElement(int array[9][9], int row, int col)
{
    if (row >= 0 && row < 9 && col >= 0 && col < 9)
    {
        array[row][col] = 0;
    }
    else
    {
        cout << "Invalid position!" << endl;
    }
}

int main()
{
    int array[9][9];

    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < 9; ++i)
    {
        for (int j = 0; j < 9; ++j)
        {
            cin >> array[i][j];
        }
    }

    cout << "Elements of the array:" << endl;
    traverse(array);

    int target;
    cout << "Enter an element to search: ";
    cin >> target;
    if (search(array, target))
    {
        cout << "Element found!" << endl;
    }
    else
    {
        cout << "Element not found!" << endl;
    }

    cout << "Sum of all elements: " << sumElements(array) << endl;

    int row, col, value;
    cout << "Enter row and column to insert an element: ";
    cin >> row >> col;
    cout << "Enter value to insert: ";
    cin >> value;
    insertElement(array, row, col, value);

    cout << "Array after insertion:" << endl;
    traverse(array);

    cout << "Enter row and column to delete an element: ";
    cin >> row >> col;
    deleteElement(array, row, col);

    cout << "Array after deletion:" << endl;
    traverse(array);

    return 0;
}
