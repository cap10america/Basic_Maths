#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    int low_ptr = 0;
    int high_ptr = s.size() - 1;

    while (low_ptr <= high_ptr) {
        while (low_ptr <= high_ptr && !isalnum(s[low_ptr])) {
            low_ptr++;
        }

        while (low_ptr <= high_ptr && !isalnum(s[high_ptr])) {
            high_ptr--;
        }

        if (low_ptr > high_ptr) {
            break;
        }

        if (tolower(s[low_ptr]) != tolower(s[high_ptr])) {
            return false;
        }

        low_ptr++;
        high_ptr--;
    }

    return true;
}

int main() {
    cout << "Enter a string to check if it is palindrome or not: ";
    string s;
    cin >> s;
    cout << isPalindrome(s) << endl;
    return 0;
}