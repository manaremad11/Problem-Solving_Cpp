#include <iostream>
using namespace std;
const int max_size=1000000;

int main()
{
    long long n, l,r;
    cin>>n;
    long long arr[max_size];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cin>>l>>r;
    for(int i=(l-1); i<=(r-1); i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
