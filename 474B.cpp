#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    vector<int> piles(n);
    int totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> piles[i];
        totalsum += piles[i];
    }

    vector<int> number(totalsum + 1, 0);
    int k = 1;
    int limit = piles[0];
    int label = 1;

    for (int i = 1; i <= limit; i++)
    {
        number[i] = label;
        if (i == limit && k < n)
        {
            limit += piles[k++];
            label++;
        }
    }
    int m;
    cin >> m;
    //vector<int> juicyworm(m);
    int l;
    for (int i = 0; i < m; i++)
    {
        cin >> l;
        cout << number[l] << endl;
    }

    return 0;
}