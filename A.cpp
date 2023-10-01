#include <bits/stdc++.h>
#define sp " "
#define el "\n"
using namespace std;
int main()
{
    int N, K;
    cin >> N >> K;

    int Arr[N];
    for (int i = 0; i < N; i++)
        cin >> Arr[i];

    long ans, sum = 0;
    for (int i = 0; i < K; i++)
    {
        sum += Arr[i];
    }
    ans = sum;
    for (int i = K; i < N; i++)
    {
        sum = sum + Arr[i] - Arr[i - K];
        ans = max(sum, ans);
    }

    cout << ans << endl;
}