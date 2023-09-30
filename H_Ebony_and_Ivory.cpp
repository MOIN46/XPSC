#include <bits/stdc++.h>
#define sp " "
#define el "\n"
#define ll long long int
using namespace std;
int main()
{
    ll a, b, c;
    cin >> a >> b >> c;

    if (a == 1 || b == 1 || a == c || b == c)
    {
        cout << "Yes\n";
    }
    else
    {

        bool flag = 0;
        int x = min(a, b);

        for (int i = 0; i <= c / x; i++)
        {
            for (int j = 0; j <= c / x; j++)
            {
                if ((a * i) + (b * j) == c)
                {
                    flag = 1;
                }
            }
        }

        if (flag)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}