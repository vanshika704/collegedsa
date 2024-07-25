# include <iostream>
using namespace std;
int main (){
    int number ;
    cout<< " Enter a number";
    cin>> number;
       int lastdigit;
    while (number>0){

 
 lastdigit = number % 10;
 
number = number /10;
 cout << number;
    }
   
   
}