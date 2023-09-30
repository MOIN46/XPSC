#include <bits/stdc++.h>
#define sp " "
#define el "\n"
#define ll long long int
using namespace std;
int main()
{
    ll a, b, c;
    cin >> a >> b;
    int d = a - b;
    double x = (d * 1.0) / a;

    printf("%0.5lf\n", x * 100);
}