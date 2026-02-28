#include <iostream>
using namespace std;

void printChars(int count, char c) {
    if (count <= 0) {
        return;
    }
    cout << c;
    printChars(count - 1, c);
}
void printPyramid(int n, int currentRow = 1) {
    if (currentRow > n) {
        return;
    }
    printChars(n - currentRow, ' ');
    printChars(2 * currentRow - 1, '*');
    cout << "\n";
    printPyramid(n, currentRow + 1);
}

int main() {
    int n;
    cout << "Enter number : "<<endl;
    if (cin >> n) {
        printPyramid(n);
    }
    
    return 0;
}