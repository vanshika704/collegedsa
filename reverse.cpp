# include <iostream>
using namespace std;
int main (){
    int number =0 ;
    cout<<"enter number";
    cin>> number;
   
int reverse=0;
    while(number>0){
      int  lastdigit = number % 10;
         reverse = (reverse * 10)+ lastdigit;
        number = number /10;
       
    }
     cout<< reverse;
}

// #include <limits.h> // For INT_MAX and INT_MIN

// class Solution {
// public:
//     int reverse(int x) {
//         int reverse = 0;
        
//         while (x != 0) {
//             int lastdigit = x % 10;
//             x /= 10;

//             // Check for overflow conditions
//             if (reverse > INT_MAX / 10 || (reverse == INT_MAX / 10 && lastdigit > 7)) {
//                 return 0; // Overflow will occur
//             }
//             if (reverse < INT_MIN / 10 || (reverse == INT_MIN / 10 && lastdigit < -8)) {
//                 return 0; // Underflow will occur
//             }
            
//             reverse = reverse * 10 + lastdigit;
//         }
        
//         return reverse;
//     }
// };
