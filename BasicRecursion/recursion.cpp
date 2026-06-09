#include <iostream>
using namespace std;

void printName(int n){
    if(n == 0) return;
    cout << "Saurav" << endl;
    printName(n-1);
}

int main(){
    printName(8);
    return 0;
}