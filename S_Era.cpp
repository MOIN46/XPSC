#include <bits/stdc++.h>
#define sp " "
#define el "\n"
using namespace std;
int main()
{
    int t;
    cin >> t;
    bool f = true;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int mx = 0;
        int index = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > mx)
            {
                mx = a[i];
                index = i + 1;
            }
        }
        if (mx < index)
            cout << 0 << endl;
        else
            cout << mx - index << endl;
    }
}