/*
    * 
    * * 
    * * * 
    * * * *
 print this pattern
*/
// code starts here
#include <iostream>
using namespace std;
 void  pattern2(int n){
    for (int i = 0; i < n; i++)  // lets suppose n here is 6.  so it will be 0<6 true ||. ab i ki value badh k 1 1<6  true
    {
        for(int j = 0; j<=i; j++){    // 0<=0 true print a star  fir 1<=0 false hua to loop se bahar || j fir se 0 hoga  ab 0<=1 1<=1 **  
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
        pattern2(n);
    }
    
      
        return 0;
    }