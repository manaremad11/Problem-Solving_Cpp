#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int N = 10000;
int main()
{
    int n, k, b=0, arr[N];
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        
    }
    for(int j =0; j<n; j++)
    {
        if(arr[j]>=arr[k-1] && arr[j]>0)
        b++;
    }
    cout<<b;
    return 0;
}
