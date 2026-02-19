/*
   A
  ABA
 ABCBA
 print this pattern in reverse
*/
// code starts here
#include <iostream>
using namespace std;
 void  pattern14(int n){
    for (int i = 0; i < n; i++)  
    {
        //space2
        
        for  ( int j=0 ; j<n-i-1;j++){
            cout<<" ";
        }
        //ALPHABET
        char ch ='A';
        int breakpoint = (2*i+1)/2;
        for (int j=1 ; j<= 2*i+1;j++){
            cout << ch ;
            if (j<=breakpoint) ch++;
            else ch --;
        }
         //space
        for  ( int j=0 ; j<n-i-1;j++){
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
        pattern14(n);
    }
    
      
        return 0;
    }