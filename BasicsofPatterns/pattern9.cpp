/*
        1
        01
        101
        0101
        10101
 
 print this pattern
*/
// code starts here
#include <iostream>
using namespace std;
 void  pattern9(int n){
   int starts = 1;
   for (int i = 0 ; i<n ;i++){         //n=5. 0<=5
        if (i%2 == 0) starts =1;
        else starts=0;
        for (int j = 0 ;j <= i ; j++){
            cout << starts << " ";
            starts =1-starts;
        }
        cout << endl ;
   }
 }   //in that way this problem will be solved 
int main() {
    int t;          //t her is test cases 
    cin >> t;
    for (int  i = 0; i < t; i++)
    {
          int n;
        cin>>n;
        pattern9(n);
    }
    
      
        return 0;
    }