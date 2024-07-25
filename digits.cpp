# include <iostream>
using namespace std;
int main (){
    int number ;
    cout<< " enter a number";
    cin>> number;
       int lastdigit =0;
    while (number>0){


 lastdigit = number % 10;
 cout << lastdigit;
number = number /10;
    }
}