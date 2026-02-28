#include <iostream>
#include <string>
#include <cctype> 
using namespace std;
bool isVowel(char c) {
    c = tolower(c); 
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int countVowels(const string& str, int index) {
    if (index == str.length()) {
        return 0;
    }
    int currentCount = isVowel(str[index]) ? 1 : 0;
    return currentCount + countVowels(str, index + 1);
}

int main() {
    string s;
    if (getline(cin, s)) {
        cout << countVowels(s, 0) << "\n";
    }
    
    return 0;
}