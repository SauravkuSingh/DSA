/*
    1 
    1 2 
    1 2 3 
    1 2 3 4
    1 2 3 4 5
 print this pattern
*/
// code starts here
#include <iostream>
using namespace std;
 void  pattern3(int n){
    for (int i = 1; i <= n; i++)  
    {
        for(int j = 1; j<=i; j++){     
            cout << j <<" ";
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
        pattern3(n);
    }
    
      
        return 0;
    }