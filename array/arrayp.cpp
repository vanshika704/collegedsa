#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int arr[9][9];
    srand(time(0));

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            arr[i][j] = rand() % 100;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}