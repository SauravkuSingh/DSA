#include <iostream>
using namespace std;

bool prime(int n) {
    int cnt = 0;
    for ( int i =1 ; i*i <=n; i++){
        if(n%i ==0){
            cnt++;
            if((n/i) != i){
                cnt++;
            }
        }
    }
    if(cnt == 2) return true;
    else return false;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (prime(n) == true) {
        cout << "The number is a prime number." << endl;
    } else {
        cout << "The number is not a prime number." << endl;
    }

    return 0;
}