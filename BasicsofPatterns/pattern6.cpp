/*
   *
  ***
 *****
*******   
 print this pattern
*/
// code starts here
#include <iostream>
using namespace std;
 void  pattern5(int n){
    for (int i = 1; i <= n; i++)  
    {
        //space
        for  ( int j=0 ; j<n-i-1;j++){
            cout<<"-";
        }
        //stars
        for (int j=0 ; j< 2*i-1;j++){
            cout << "*";
        }
         //space
        for  ( int j=0 ; j<n-i-1;j++){
            cout<<"-";
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
        pattern5(n);
    }
    
      
        return 0;
    }