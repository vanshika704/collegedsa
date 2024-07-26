# include <iostream>
using namespace std;
int main (){
    int number = 0 ;

    cout<<"Enter the number";
    cin>> number;
    int orignal = number;
    int lastdigit = 0;
    int reverse = 0 ;
    while (number> 0){
        lastdigit = number %10;
        reverse = (reverse * 10) + lastdigit;
    number = number /10;
    }
    if (orignal != number){
        cout<< "yes the no is pallindrome";

    }
    else (cout<< "no the number is not pallindrome");

}