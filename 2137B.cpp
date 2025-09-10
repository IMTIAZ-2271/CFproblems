#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int permute[n];
        int v[n];
        for (int i = 0; i < n; i++)
        {
            cin >> permute[i];
        }
        for (int i = 0; i < n; i++)
        {
            v[i] = n - permute[i] + 1;
        }
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }

    return 0;
}