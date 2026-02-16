/*
    1 
    2 2 
    3 3 3 
    4 4 4 4
    5 5 5 5 5
 print this pattern
*/
// code starts here
#include <iostream>
using namespace std;
 void  pattern4(int n){
    for (int i = 1; i <= n; i++)  
    {
        for(int j = 1; j<=i; j++){     
            cout << i <<" ";
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
        pattern4(n);
    }
    
      
        return 0;
    }