#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    int team1 = 1, team2 = 0;
    string name1 = s[0], name2;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == name1)
        {
            team1++;
        }
        else
        {
            team2++;
            if (name2.empty())
                name2 = s[i];
        }
    }
    if (team1 > team2)
        cout << name1 << endl;
    else
        cout << name2 << endl;
    return 0;
}