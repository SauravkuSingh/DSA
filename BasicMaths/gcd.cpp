#include <iostream>
using namespace std;

int gcd(int a , int b) {
    while(a > 0 && b > 0){
        if(a > b) a = a%b;
        else b = b%a;
    }
   if(a == 0)return b;
    else return a;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int m;
    cout << "Enter another number: ";
    cin >> m;
    cout << "GCD = " << gcd(n,m) << endl;
    return 0;
}