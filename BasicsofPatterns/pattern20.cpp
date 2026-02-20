/*
****
*  *
*  * 
****
*/
#include <iostream>
using namespace std;
 void  pattern20(int n){
    int space = 0;
    //upper half 
    for (int i = 0; i < 2*n-1; i++)  
    {

        for(int j=0;j<2*n-1;j++){
            int top = i ;
            int down = (2*n-2)-i;
            int left = j;
            int right = (2*n-2)-j;
            cout << (n- min(min(top,down),min(left,right))); 
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
        pattern20(n);
    }
    
      
        return 0;
    }