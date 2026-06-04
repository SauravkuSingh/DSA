#include <iostream>
using namespace std;

int countDigits(int n) {
    if (n == 0) return 1;

    int cnt = 0;
    while (n > 0) {
        cnt++;
        n /= 10;
    }
    return cnt;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Number of digits = " << countDigits(n) << endl;

    return 0;
}