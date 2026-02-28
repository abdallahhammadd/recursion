#include <iostream>
using namespace std;

void printChars(int count, char ch) {
    if (count <= 0) {
        return;
    }
    cout << ch;
    printChars(count - 1, ch);
}
void printInvertedPyramid(int totalHeight, int currentSize) {
    if (currentSize <= 0) {
        return;
    }
    printChars(totalHeight - currentSize, ' ');
    printChars(2 * currentSize - 1, '*');
    cout << "\n";
    printInvertedPyramid(totalHeight, currentSize - 1);
}

int main() {
    int n;
    cout << "Enter your number : " <<endl;
    if (cin >> n) {
        printInvertedPyramid(n, n);
    }
    
    return 0;
}