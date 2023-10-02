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
        string s;
        cin >> s;
        s.erase(unique(s.begin(), s.end()), s.end());
        bool ok = true;

        if (s.size() == 1 && s[0] != 'W')
        {
            ok = false;
        }
        else
        {
            int b = 0, r = 0;

            // cout << s << endl;

            for (int i = 0; i < s.size(); i++)
            {
                if (s[0] == 'W')
                    continue;
                else if (s[i] == 'B')
                    b++;
                else if (s[i] == 'R')
                    r++;
                else
                {
                    if (b == 0 || r == 0)
                    {
                        ok = false;
                        b = 0, r = 0;
                    }
                    else
                    {
                        b = 0, r = 0;
                    }
                }
            }

            if ((r == 0 || b == 0) && ok)
                ok = false;
        }

        // cout << s << endl;
        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}