/*
    A
    BB
    CCC
    DDDD
    EEEEE

*/
#include <iostream>
using namespace std;
 void  pattern15(int n){
    for (int i = 0; i < n; i++)  
    {
        //ALPHABET
        char ch ='A'+i;
        
        for (int j=0 ; j<= i;j++){
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
        pattern15(n);
    }
    
      
        return 0;
    }