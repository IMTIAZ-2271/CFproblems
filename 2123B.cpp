#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, j, k;
        int target;
        cin >> n >> j >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (i == j - 1)
            {
                target = v[i];
            }
        }
        sort(v.begin(), v.end());
        if(k == 1){
            if(v[n-1] == target){
                cout << "YES" << endl;
            } 
            else {
                cout << "NO" << endl;
            }
        }
        else {cout << "YES" << endl;
        }
    }
    return 0;
}