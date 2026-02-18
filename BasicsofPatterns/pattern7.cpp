/*
   *
  ***
 *****
*******   
 print this pattern in reverse
*/
// code starts here
#include <iostream>
using namespace std;
 void  pattern7(int n){
    for (int i = 0; i < n; i++)  
    {
        //space2
        
        for  ( int j=0 ; j<i;j++){
            cout<<" ";
        }
        //stars
        for (int j=0 ; j< 2*(n-i)+1;j++){
            cout << "*";
        }
         //space
        for  ( int j=0 ; j<i;j++){
            cout<<" ";
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
        pattern7(n);
    }
    
      
        return 0;
    }