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
 void  pattern12(int n){
   for (int i = 0 ; i<n ;i++){         //n=5. 0<5
        for(char ch ='A' ; ch <= 'A'+i;ch++){
            cout << ch;

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
        pattern12(n);
    }
    
      
        return 0;
    }