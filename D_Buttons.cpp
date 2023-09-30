#include <bits/stdc++.h>
#define sp " "
#define el "\n"
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int ans = 0;
    if (a > b)
    {
        ans = 2 * a - 1;
    }
    else if (a == b)
    {
        ans = 2 * b;
    }
    else
    {
        ans = 2 * b - 1;
    }

    cout << ans << endl;
}