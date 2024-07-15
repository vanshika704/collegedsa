#include <iostream>
using namespace std;

void Selection_sort(int arr[], int number)
{
    for (int i = 0; i < number - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < number; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main()
{
    int number;
    cout << "Enter the number of elements in the array: ";
    cin >> number;

    int arr[number];

    cout << "Enter " << number << " elements:" << endl;
    for (int i = 0; i < number; i++)
    {
        cin >> arr[i];
    }

    Selection_sort(arr, number);

    cout << "Array after sorting:" << endl;
    for (int i = 0; i < number; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
