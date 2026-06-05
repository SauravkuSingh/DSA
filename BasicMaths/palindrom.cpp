#include <iostream>
using namespace std;

bool palindrome(int n) {
   int dup = n ;
   int rev = 0 ; 
   while(n != 0){
        int lD = n%10;
        n /= 10;
        if(rev > INT_MAX/10 || (rev == INT_MAX/10 && lD > 7)) return 0;
        if(rev < INT_MIN/10 || (rev == INT_MIN/10 && lD < -8)) return 0;
        rev = rev*10 + lD;
   }
   if(dup == rev) return 1;
   else return 0;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (palindrome(n) == 1) {
        cout << "The number is a palindrome." << endl;
    } else {
        cout << "The number is not a palindrome." << endl;
    }
    

    return 0;
}