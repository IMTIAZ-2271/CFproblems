#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int pieces[m];
    for (int i = 0; i < m; i++)
    {
        cin >> pieces[i];
    }
    sort(pieces, pieces + m);
    int min = INT_MAX;
    for (int i = 0; i < m-n+1; i++)
    {
        if (pieces[i + n - 1] - pieces[i] < min)
        {
            min = pieces[i + n - 1] - pieces[i];
        }
    }
    cout << min << endl;

    return 0;
}