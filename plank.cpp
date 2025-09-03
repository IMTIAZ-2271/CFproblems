#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, k;
    cin >> n >> k;

    vector<long long int> heights(n, 0LL);
    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }
    long long int total_heights = 0;
    //long long int min;
    int index = 1;

    for (int i = 0; i < k; i++)
    {
        total_heights += heights[i];
    }
    long long int min=total_heights;
    for (int i = k; i < n; i++)
    {
        total_heights += (heights[i] - heights[i - k]);
        if (total_heights < min)
        {
            min = total_heights;
            index = i-k+2;
        }
    }

    cout << index << endl;

    return 0;
}