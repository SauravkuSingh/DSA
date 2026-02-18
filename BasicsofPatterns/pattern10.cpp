/*
        1      1 
        12    21  
        123  321
        12344321
 
 print this pattern
*/
// code starts here
#include <iostream>
using namespace std;
 void  pattern10(int n){
   int space = 2*(n-1);
   for (int i = 1 ; i<=n ;i++){      
        //for number 
      for (int j = 1; j <= i; j++)
      {
        cout << j ; 
      }
      //for space
      for (int j = 0; j <= space; j++)
      {
        cout << " "; 
      }
      //for number in reverse
      for (int j = i; j >= 1; j--)
      {
        cout << j ; 
      }
        cout << endl ;
        space -=2;
   }
 }   
int main() {
    int t;          //t her is test cases 
    cin >> t;
    for (int  i = 0; i < t; i++)
    {
          int n;
        cin>>n;
        pattern10(n);
    }
    
      
        return 0;
    }