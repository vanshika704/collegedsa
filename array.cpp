#include <iostream>
using namespace std;

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
    for (int i = 0; i < 9; ++i)
    {
        for (int j = 0; j < 9; ++j)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
