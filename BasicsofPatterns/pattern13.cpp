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
 void  pattern13(int n){
   
   for (int i = 0 ; i<n ;i++){       
        for(char ch ='A';ch<= 'A'+(n-i-1);ch++){
            cout << ch ;
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
        pattern13(n);
    }
    
      
        return 0;
    }