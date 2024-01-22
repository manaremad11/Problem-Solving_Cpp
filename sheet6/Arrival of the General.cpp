#include <iostream>
using namespace std;



int main()
{
    int arr[101];
    int n;
    cin >> n;
    int mn = 101, x;
    int mx = 0, y;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > mx)
        {
            mx = arr[i];
            y = i;
        }
        if (arr[i] <= mn)
        {
            mn = arr[i];
            x = i;
        }
    }
    int ans = y + (n - 1 - x);
    if (y > x)
    {
        ans--;
    }
    cout << ans << "\n";

    return 0;
}

