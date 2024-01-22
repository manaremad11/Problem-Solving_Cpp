#include <iostream>
using namespace std;

const int N = 105;

int main()
{
    int n, arr[N];
    cin>>n;
    
    for(int i = 0; i<n ;i++)
    {
        cin>>arr[i];
    }
    
    int m; // my shoots
    cin>>m;
    for(int i=0; i<m; i++)
    {
        int x,y;   // x:the box ,, y:the index
        cin>>x>>y;
        x--;      // x is one based, we need it 0 based to access array
        //kill yth bird in xth position: (y-1 items, y, a-y)
        if(x !=0)
        {
            arr[x-1] += y-1;
        }
        
        if(x != (n-1))
        {
            arr[x+1] += arr[x] - y;
        }
        arr[x] = 0;
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
