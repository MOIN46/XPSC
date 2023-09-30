#include <bits/stdc++.h>
#define sp " "
#define el "\n"
#define ll long long int
using namespace std;
int main()
{
    ll a, b, c;
    cin >> a >> b >> c;

    a = a * a;
    b = b * b;
    c = c * c;

    if (a + b < c)
        cout << "Yes\n";
    else
        cout << "No\n";
}