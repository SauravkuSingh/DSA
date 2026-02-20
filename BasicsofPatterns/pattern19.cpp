/*
****
*  *
*  * 
****
*/
#include <iostream>
using namespace std;
 void  pattern19(int n){
    int space = 0;
    //upper half 
    for (int i = 0; i < n; i++)  
    {
        //stars
        for(int j=0;j<n;j++){
            if (i == 0 || j == 0 || i == n-1 || j == n-1)
                 cout<< "*";
            
            else cout<< " ";
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
        pattern19(n);
    }
    
      
        return 0;
    }