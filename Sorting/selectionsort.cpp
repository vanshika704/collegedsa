#include <iostream>
using namespace std;

int main() {
    int array[] = {2, 4, 45, 2546, 23, 246, 78};
    int n = sizeof(array) / sizeof(array[0]);

   
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }
     
        if (minIndex != i) {
            int temp = array[i];
            array[i] = array[minIndex];
            array[minIndex] = temp;
        }
    }

  
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }

    return 0;
}
