#include <iostream>
#include <cstdio>
using namespace std;

int a[1005];
int ans[1005];

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 1)
        {
            int b;
            cin >> b;
            cout << '1' << '\n' << '1' << '\n';
            continue;
        }
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        int tot = 1;
        for (int i = 1; i < n - 1; ++i)
            if (a[i] == 1)
                ans[tot++] = a[i - 1];
        if (a[n - 1] == 1)
        {
            ans[tot] = a[n - 2];
            tot++;
            ans[tot] = 1;
        }
        if (a[n - 1] != 1)
            ans[tot] = a[n - 1];
        cout << tot << '\n';
        for (int i = 1; i <= tot; ++i)
            cout << ans[i] << ' ';
        cout << '\n';
    }
    return 0;
}

