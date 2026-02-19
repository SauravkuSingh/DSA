/*
    E
    DE
    CDE
    BCDE
    ABCDE

*/
#include <iostream>
using namespace std;
 void  pattern17(int n){
    for (int i = 0; i < n; i++)  
    {
        //ALPHABET
        
        
        for (char ch ='E'-i; ch<= 'E';ch++){
            cout << ch ;
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
        pattern17(n);
    }
    
      
        return 0;
    }