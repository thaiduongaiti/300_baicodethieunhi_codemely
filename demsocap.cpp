//
// Created by duong on 11/17/2023.
//
#include <iostream>
using namespace std;
int main()
{
    int n;
    long long x;

    cin>>n>>x;
    long a[n];
    for(int i = 0 ; i < n; i++)
    {
        cin>>a[i];
    }
    int count = 0;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = i ; j < n ; j ++)
        {
            if((a[i] * a[i] + a[j] == x) && (i <= j) ) count++;
        }
    }
    cout<<count;
    return 0;
}
