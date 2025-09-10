#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    int t;
    cin >> t;
    vector<int> a(n - 1);
    int totalsum = 1;
    int tt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
        if (i == tt)
        {
            totalsum += a[i];
            tt += a[i];
        }

        if (totalsum == t)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}