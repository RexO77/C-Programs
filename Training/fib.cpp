#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;

    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Fibonacci number is: " << fibonacci(n) << endl;
    for(int i=0;i<=n;++i){
        cout<<fibonacci(i);
    }
    return 0;
}