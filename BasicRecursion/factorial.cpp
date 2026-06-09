#include <iostream>
using namespace std;
void fact(int i , int cnt){
    if(i<1){
        printf("%d ", cnt);
        return ;
    }
    fact(i-1, cnt*i);
}

int factorial(int n){
    if(n==0)return 1;
    return n * factorial(n-1);
}
int main() {
    int n;
    cout << "Enter Number: ";
    cin>> n;
    fact(n,1);
    cout << factorial(n) << endl;
    return 0;
}