#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

using namespace std;

int main()
{
    const int rows = 9;
    const int cols = 9;
    int array[rows][cols];

    // Initialize random seed
    srand(time(0));

    // Input random values into the array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = rand() % 100;
        }
    }

    cout << "Generated 9x9 Array:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
