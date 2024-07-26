#include <iostream>
using namespace std;

int main() {
    int number = 0;
    cout << "Enter number: ";
    cin >> number;

    int originalNumber = number;
    int sum = 0;
    int digits = 0;
    int temp = number;

   
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = number;
  
    while (temp > 0) {
        int lastdigit = temp % 10;
        sum += pow(lastdigit, digits);
        temp /= 10;
    }

    if (sum == originalNumber) {
        cout << "Yes, it is an Armstrong number" << endl;
    } else {
        cout << "No, it is not an Armstrong number" << endl;
    }

    return 0;
}
