#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int x;
    cin >> x;
    if (x >= 5 && x <= 9)
    {
        if (x == 9)
        {
            cout << x << endl;
        }
        else
        {
            cout << 9 - x << endl;
        }
        return 0;
    }
    long long int ans = 0;
    long long int p = 1;
    int temp;
    while (x != 0)
    {
        temp = x % 10;
        if (temp >= 5)
        {
            if (x != 9)
            {
                temp = 9 - temp;
            }
        }
        ans = ans + p * temp;
        x /= 10;
        p *= 10;
    }
    cout << ans << endl;
    return 0;
}