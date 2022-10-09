#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a[30008], f[30008];
    cin >> n;

    int t, max = 0;

    for(int i = 0; i < n;)
    {
        cin >> a[i];
        t = lower_bound(f, f + max, a[i]) - f;
        f[t] = (t == max) ? a[i] : f[t];
        max += (t == max) ? 1 : 0;
        if(t != max)
            f[t] = min(f[t], a[i]);

        ++i; 
    }

    cout << max;
    return 0;
}
