

// Small and cute beast. I have struggled so much with this.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m;
    cin >> n >> m;

    int clicks = 0;
    if (m <= n)
    {
        clicks = n - m;
    }
    else
    {
        int t = m;
        int x = n;
        while (t > x)
        {
            if (t % 2 == 0)
            {
                t /= 2;
            }
            else
            {
                t++;
            }
            clicks++;
        }
        clicks += x - t;
    }
    cout << clicks << endl;

    return 0;
}