#include<bits/stdc++.h>
using namespace std;
int fib(int n) {
       if(n<=1)return n;
       return fib(n-1)+fib(n-2);
}
int main()
 {
    int n;

   cout << "Enter a number to find its Fibonacci value: ";
    cin >> n;

    if (n < 0) {
        cerr << "Error: Negative input is not allowed.\n";
        return 1;
    }

    int result = fib(n);
    cout << "Fib(" << n << ") = " << result << std::endl;

    return 0;
}