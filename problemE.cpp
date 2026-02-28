#include <iostream>
using namespace std;

void printBinary(int n) {
    if (n > 1) {
        printBinary(n / 2);
    }
    cout << n % 2;
}

int main() {
    int n;
    cout << "Enter number : " <<endl;
    cin >> n;
    printBinary(n);
    
    return 0;
}