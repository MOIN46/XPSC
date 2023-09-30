#include <bits/stdc++.h>
#define sp " "
#define el "\n"
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int cnt[26];
        memset(cnt, 0, sizeof(cnt));

        for (int i = 0; i < s.size(); i++)
        {
            cnt[s[i] - 'A']++;
        }

        int sum = 0;

        for (int i = 0; i < 26; i++)
        {
            if (cnt[i] >= 1)
            {
                sum += 1 + cnt[i];
            }
        }

        cout << sum << endl;
    }
}