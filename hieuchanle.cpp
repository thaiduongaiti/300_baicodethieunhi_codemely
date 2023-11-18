#include <iostream>
using namespace std;
int main()
{
    long n;
    cin>>n;
    long long a[n];
    for(int i = 0 ;i < n; i++)
    {
        cin>>a[i];
    }
    long tong = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(i % 2 != 0) tong += a[i];
        else tong -= a[i];
    }
    cout<<tong;
    return 0;
}
