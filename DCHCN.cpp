#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("DCHCN.inp", "r", stdin);
    freopen("DCHCN.out", "w", stdout);

    int n, m;
    long long f[100][100];

    cin >> n >> m;

    for(int i = 0; i <= n; ++i)
    {
        for(int j = 0; j <= m; ++j)
        {
            if(!i || !j)
                f[i][j] = 0;
            else if(i == 1 || j == 1)
                f[i][j] = 1;
            else
                f[i][j] = f[i - 1][j] + f[i][j - 1];
        }
    }

    cout << f[n][m];

    return 0;
}