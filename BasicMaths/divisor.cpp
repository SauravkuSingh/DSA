#include <iostream>
using namespace std;

void divisor(int n){
    vector <int> divs;
    for(int i =1; i*i<=n; i++){
        if(n%i ==0){
            divs.push_back(i);
            if((n/i) != i){
                divs.push_back(n/i);
            }
        }
    }
    sort(divs.begin(), divs.end());
    for(auto it:divs) cout << it << " ";
}


int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    divisor(n);

    return 0;
}