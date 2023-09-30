#include <bits/stdc++.h>
#define sp " "
#define el "\n"
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cnt[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        cnt[s[i] - 'a']++;
    }

    int f = 1;
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] == 0)
        {
            f = 0;
            char ch = 'a' + i;
            cout << ch << endl;
            break;
        }
    }
    if (f)
        cout << "None\n";
}