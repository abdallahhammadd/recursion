#include <iostream>
using namespace std;

void printDigit(long long n) {
    if (n < 0) {
        cout << "- ";
        n = -n;
    }
    if (n < 10) {
        cout << n;
        return;
    }
    printDigit(n / 10);
    
    cout << " " << (n % 10);
}

int main() {
    long long n;
    cout << "Enter your number : " <<endl;
    cin >> n;
    printDigit(n);
    
    return 0;
}