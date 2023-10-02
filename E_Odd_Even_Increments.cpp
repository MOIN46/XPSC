/**
 *    author:  MOIN46
 *          --MD:MOIN UDDIN BHUYAIN TUHIN
 *          --CSE,BRUR
 *          --Email:cse118199brur@gmail.com
 **/

#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define vec vector<int>
#define sp " "
#define el "\n"
#define SQ(a) a *a
#define EPS 1E-9
#define PI acos(-1)
#define ll long long int
#define loop(i, n) for (int i = 0; i < n; i++)
#define p(condition) cout << (condition ? "YES" : "NO")
#define me ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main()
{
    me;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool ok = true;

        for (int i = 0; i < n; i += 2)
        {
            if (a[0] % 2 != a[i] % 2)
            {
                ok = false;
            }
        }

        for (int i = 1; i < n; i += 2)
        {
            if (a[1] % 2 != a[i] % 2)
            {
                ok = false;
            }
        }

        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}