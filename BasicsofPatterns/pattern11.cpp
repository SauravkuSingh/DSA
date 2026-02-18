/*
        1
        23
        456
        78910
 print this pattern
*/
// code starts here
#include <iostream>
using namespace std;
 void  pattern11(int n){
    int num = 1 ;
   for (int i = 1 ; i<=n ;i++){         //n=5. 0<=5
       for(int j =1 ;j<=i;j++){
        cout<< num;
        num +=1;
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
        pattern11(n);
    }
    
      
        return 0;
    }