#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int* a = new int[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int count = 0;
        for (int i = 0; i < n - 1; ++i) {
            float mn = min(a[i], a[i + 1]);
            float mx = max(a[i], a[i + 1]);
            while (mx / mn > 2.0) {
                mx = ceil(mx / 2);
                count++;
            }
        }
        cout << count << "\n";
    }
}
