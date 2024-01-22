#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int arr1[5001], arr2[5001], arr3[5001];
int main()
{
    int n;
    cin >> n;
    int a1 = 0, a2 = 0, a3 = 0;
    for (int i = 1; i <=  n; i++)
    {
        int num;
        cin >> num;
        if (num == 1)
        {
            arr1[a1] = i;
            a1++;
        }
        else if (num == 2)
        {
            arr2[a2] = i;
            a2++;
        }
        else
        {
            arr3[a3] = i;
            a3++;
        }
    }
    int team = min(a1, min(a2, a3));
    cout << team << "\n";
    for (int i = 0; i < team; i++)
    {
        cout << arr1[i] << " " << arr2[i] << " " << arr3[i] << "\n";
    }
    return 0;
}
