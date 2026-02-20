/*

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/
#include <iostream>
using namespace std;
 void  pattern18(int n){
    int space = 2*n-2;
    //1side 
    for (int i = 1; i <= 2*n-1; i++)  
    {
        int stars  = i;
        if(i>n) stars = 2*n-i;
        //stars
        for(int j=1;j<=stars;j++){
            cout<< "*";
        }
        //space

        for(int j =1; j<=space;j++){
            cout << " ";
        }
        //stars
        for(int j=1;j<=stars;j++){
            cout<< "*";
        }
        cout<<endl;
        if(i<n)space -=2;
        else space +=2;
    }
   
 }   //in that way this problem will be solved 
int main() {
    int t;          //t her is test cases 
    cin >> t;
    for (int  i = 0; i < t; i++)
    {
          int n;
        cin>>n;
        pattern18(n);
    }
    
      
        return 0;
    }