#include <bits/stdc++.h>

using namespace std;

long long MAX_3(long long a, long long b, long long c)
{
    long long max = a;
    max = (b > max) ? b : max;
    max = (c > max) ? c : max;

    return max;
}   


long long a[8000][8000], f[8000][8000];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("VANMAY.inp", "r", stdin);
    // freopen("VANMAY.out", "w", stdout);

    int m, n;

    cin >> m >> n;

    for(int i = 1; i <= m; ++i)
    {
        for(int j = 1; j <= n; ++j)
        {
            cin >> a[i][j];
        }
    }

    // f[1][1] = a[1][1];

    for(int j = 1; j <= n; ++j)
    {
        for(int i = 1; i <= m; ++i)
        {  
            f[i][j] = MAX_3(f[i-1][j-1], f[i][j-1], f[i+1][j-1]) + a[i][j];
        }
    }

    long long res = 0;

    for(int i = 1; i <= m; ++i)
        res = max(res, f[i][n]);

    cout << res;

    return 0;
}