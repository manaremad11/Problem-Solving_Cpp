#include <iostream>
using namespace std;

const int N = 100005;
int A[N], B[N], n;
int product(int i)
{
    if (i >= n)
        return 0;
    return A[i] * B[i] + product(i + 1);
}

int main() 
{
    cin >> n;
    for (int i = 0; i < n; i++) 
        cin >> A[i];
    for (int i = 0; i < n; i++) 
        cin >> B[i];
    if (!product(0))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
