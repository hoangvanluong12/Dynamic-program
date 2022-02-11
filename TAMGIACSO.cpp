#include <bits/stdc++.h>

using namespace std;

long long a[5000][5000], f[5000][5000];
int main()
{
    freopen("TAMGIACSO.int", "r", stdin);
    freopen("TAMGIACSO.out", "w", stdout);

    int n;

    cin >> n;

    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cin >> a[i][j];
        }
    }

    // for(int i = 1; i <= n; ++i)
    // {
    //     for(int j = 1; j <= i; ++j)
    //     {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    long long res = 0;
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= i; j++)
        {
            f[i][j] = max(f[i-1][j-1], f[i-1][j]) + a[i][j];
            
            res = (res >= f[i][j]) ? res : f[i][j];
        }
    }

    // for(int i = 1; i <= n; ++i)
    // {
    //     for(int j = 1; j <= i; ++j)
    //     {
    //         cout << f[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    cout << res;

    return 0;
}