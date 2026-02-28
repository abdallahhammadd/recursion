#include <iostream>
#include <vector>
using namespace std;

void printEvenReverse(const vector<int>& arr, int index, int n) {
    if (index >= n) {
        return;
    }
    printEvenReverse(arr, index + 2, n);
    cout << arr[index];
    if (index > 0) {
        cout << " ";
    }
}
int main() {
    int n;
    if (cin >> n) {
        vector<int> arr(n);
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        printEvenReverse(arr, 0, n);
    }
    
    return 0;
}