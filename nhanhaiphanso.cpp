#include<iostream>
using namespace std;

long long ucln (long long a, long long b)
{
    if (b == 0) return a;
    return ucln (b, a%b);
}
int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long tu = a*d + b*c;
    long long mau = b*d;
    long long ucl = ucln (tu, mau);
    cout << tu/ ucl << " " << mau / ucl ;
    return 0;
}
