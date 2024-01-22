#include<iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int n, k, x, a, sum = 0;
    cin >> n >> k >> x;
    for (int i = 0; i < (n - k); i++)
    {
        cin >> a;
        sum += a;
    }
    for (int i = 0; i < k; i++)
    {
        cin >> a;
        sum += x;
    }
    cout << sum << "\n";
    return 0;
}
