/*
        *
        **
        ***
        ****
        ***
        **
        *
 
 print this pattern
*/
// code starts here
#include <iostream>
using namespace std;
 void  pattern8(int n){
    for (int i = 1; i <=2*n-1; i++)  //.n=4 2x4-1. i<7. 1<7
    {
       int star = i;
       if(i>n) star =2*n-i;
       for ( int j =0 ; j<=star ;j++){
        cout << "*";
       }


        cout<<endl;
    }
 }   //in that way this problem will be solved 
int main() {
    int t;          //t her is test cases 
    cin >> t;
    for (int  i = 0; i < t; i++)
    {
          int n;
        cin>>n;
        pattern8(n);
    }
    
      
        return 0;
    }