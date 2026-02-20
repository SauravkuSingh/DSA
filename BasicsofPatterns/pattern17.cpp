/*
  **********
  ****  ****
  ***    ***
  **      **  
  *        *
  *        * 
  **      **  
  ***    ***   
  ****  ****
  ********** 


*/
#include <iostream>
using namespace std;
 void  pattern17(int n){
    int space = 0;
    //upper half 
    for (int i = 0; i < n; i++)  
    {
        //stars
        for(int j=1;j<=n-i;j++){
            cout<< "*";
        }
        //space

        for(int j =0; j<space;j++){
            cout << " ";
        }
        //stars
        for(int j=1;j<=n-i;j++){
            cout<< "*";
        }
        space +=2;
        cout<<endl;
    }
    //loop for lower half 
    space =2*n-2;
    for(int i =1;i<=n;i++){
        for (int j=1 ; j<=i;j++){
            cout<<"*";
        }
        for (int j =0 ; j< space ;j++){
            cout << " ";
        }

        for (int j=1 ; j<=i;j++){
            cout<<"*";

        }
        space -=2;
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
        pattern17(n);
    }
    
      
        return 0;
    }