#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

    srand(time(0));

    int array[9][9];

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            array[i][j] = rand() % 100;
        }
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << array[i][j] << "   ";
        }
        cout << endl;
    }

    return 0;
}
