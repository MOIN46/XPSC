// For Division 1: 1900≤rating
// For Division 2: 1600≤rating≤1899
// For Division 3: 1400≤rating≤1599
// For Division 4: rating≤1399

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

        if (n <= 1399)
            cout << "Division 4\n";
        else if (1400 <= n && n <= 1599)
            cout << "Division 3\n";
        else if (1600 <= n && n <= 1899)
            cout << "Division 2\n";
        else
            cout << "Division 1\n";
    }
}