#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int SIZE = 9;

bool search(int array[SIZE][SIZE], int findno)
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (array[i][j] == findno)
            {
                return true;
            }
        }
    }
    return false;
}

void traversal(int array[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cout << array[i][j] << "   ";
        }
        cout << endl;
    }
}

int sumOfElements(int array[SIZE][SIZE])
{
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            sum += array[i][j];
        }
    }
    return sum;
}

void insertElement(int array[SIZE][SIZE], int row, int col, int value)
{
    if (row >= 0 && row < SIZE && col >= 0 && col < SIZE)
    {
        array[row][col] = value;
    }
    else
    {
        cout << "Invalid position!" << endl;
    }
}

void deleteElement(int array[SIZE][SIZE], int row, int col)
{
    if (row >= 0 && row < SIZE && col >= 0 && col < SIZE)
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
    srand(time(0));

    int array[SIZE][SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            array[i][j] = rand() % 100;
        }
    }

    int choice;
    do
    {
        cout << "\nMenu:\n";
        cout << "1. Search\n";
        cout << "2. Traversal\n";
        cout << "3. Sum of all elements\n";
        cout << "4. Insertion\n";
        cout << "5. Deletion\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int findno;
            cout << "Enter the number to search for: ";
            cin >> findno;
            if (search(array, findno))
            {
                cout << "Number found in the array." << endl;
            }
            else
            {
                cout << "Number not found in the array." << endl;
            }
            break;
        }
        case 2:
        {
            cout << "Array elements:" << endl;
            traversal(array);
            break;
        }
        case 3:
        {
            int sum = sumOfElements(array);
            cout << "Sum of all elements: " << sum << endl;
            break;
        }
        case 4:
        {
            int insertRow, insertCol, value;
            cout << "Enter the row and column to insert the element (0-8): ";
            cin >> insertRow >> insertCol;
            cout << "Enter the value to insert: ";
            cin >> value;
            insertElement(array, insertRow, insertCol, value);
            cout << "Array after insertion:" << endl;
            traversal(array);
            break;
        }
        case 5:
        {
            int deleteRow, deleteCol;
            cout << "Enter the row and column to delete the element (0-8): ";
            cin >> deleteRow >> deleteCol;
            deleteElement(array, deleteRow, deleteCol);
            cout << "Array after deletion:" << endl;
            traversal(array);
            break;
        }
        case 6:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}
