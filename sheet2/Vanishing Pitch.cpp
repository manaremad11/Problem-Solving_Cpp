#include <iostream>
using namespace std;

int main()
{
   double v, t, s, d;
   cin>>v>>t>>s>>d;
   if(d/v >= t && d/v <= s)
        cout << "No" ;
   else
        cout << "Yes" ;
   
    return 0;
}
