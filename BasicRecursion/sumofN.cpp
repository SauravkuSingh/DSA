#include <iostream>
using namespace std;

int sum (int n ){
    if(n == 0 ) return 0;
    return n+sum(n-1);
}
void psum (int i, int cnt){
  if(i<1){
    printf("%d ", cnt);
    return;
  }
  psum(i-1, cnt+i);

}
int factorial(int n){
    if(n==0)return 1;
    return n * factorial(n-1);
}
int main() {
    int n;
    cout << "Enter Number: ";
    cin>> n;
    cout << sum(n) << endl;
    psum(n,0);
    cout << factorial(n) << endl;
    return 0;
}
