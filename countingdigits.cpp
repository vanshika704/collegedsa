# include <iostream>
# include <cmath>
# include <algorithm>
using namespace std;
//  brute force approach
int main (){
    int number;
    cout<<" enter number";
     cin>> number;
     int count =0;
     while (number > 0){
        count = count+1;
        number = number /10;
       
     }
      cout<< count<< endl;
     

}
// optimal approach:
// int countdigits(number){
//     int cnt = (int)(log10(number)+1);
//     return cnt;
// }

