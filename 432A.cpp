#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int player[n];
    for (int i = 0; i < n; i++)
    {
        cin >> player[i];
    }
    sort(player, player + n);
    int teamcount = 0;
    for (int i = 0; i < n - 2; i++)
    {
        if (5 - player[i] >= k && 5 - player[i + 2] >= k)
        {
            teamcount++;
            i+=2;
        }
    }
    cout << teamcount << endl;

    return 0;
}