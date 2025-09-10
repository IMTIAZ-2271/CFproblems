#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> dragons;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        dragons.push_back({a, b});
    }
    sort(dragons.begin(), dragons.end());
    int t=n;
    for (int i = 0; i < n; i++)
    {
        if (dragons[i].first < s)
        {
            s += dragons[i].second;
            t--;
        }
        else
        {
            break;
        }
    }

    if (t == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}