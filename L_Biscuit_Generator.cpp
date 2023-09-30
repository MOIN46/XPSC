#include <bits/stdc++.h>
#define sp " "
#define el "\n"
using namespace std;
int main()
{
    int a, b, t;
    cin >> a >> b >> t;
    if (a <= t)
    {
        int s = 0;
        int n = 0;
        int i = 1;
        while (1)
        {
            s = (a * i);
            // cout << s << " ";
            if (s > t)
                break;
            n += b;
            i++;
        }
        cout << n << endl;
    }
    else
        cout << 0 << endl;
}