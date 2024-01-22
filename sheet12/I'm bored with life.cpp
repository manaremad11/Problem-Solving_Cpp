#include <iostream>
using namespace std;

int factorial(int a) {
    if (a == 1)return a;
    return a * factorial(a - 1);
}

int main() {
    int a, b;
    cin >> a >> b;
    int A = min(a, b);
    int B = factorial(A);
    cout << B;
return 0;
}
