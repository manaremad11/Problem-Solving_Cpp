#include <iostream>
using namespace std;
const int N=105;

int main()
{
    int n, d =0, a, b, arr[N];
    cin>>n;
    for(int i=0; i<n-1; i++)
    {
        cin>>arr[i];
    }
    cin>>a>>b;
    for(int i=(a-1); i<(b-1); i++)
    {
        d += arr[i];
    }
    cout<<d;
    
    return 0;
}
