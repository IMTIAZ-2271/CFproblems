#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> count(100001, 0);
    int maxval = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        count[x]++;
        if (x > maxval)
        {
            maxval = x;
        }
    }
    vector<long long int> possible_point(maxval + 1, 0);

    possible_point[0] = 0;
    possible_point[1] = 1 * count[1];

    for (int i = 2; i < maxval + 1; i++)
    {
        possible_point[i] = max(1LL*i * count[i] + possible_point[i - 2], possible_point[i - 1]);
    }

    cout << possible_point[maxval] << endl;

    return 0;
}