#include <bits/stdc++.h>
using namespace std;

int frequency(int number, int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == number) {
            count += 1;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search for: ";
    int number;
    cin >> number;

    int result = frequency(number, arr, n);
    cout << "The frequency of " << number << " is: " << result << endl;

    return 0;
}