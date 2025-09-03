#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int events[n];
    for (int i = 0; i < n; i++)
    {
        cin >> events[i];
    }

    int sum = 0;
    int utc = 0;
    for (int i = 0; i < n; i++)
    {
        sum += events[i];
        if (sum == -1)
        {
            sum = 0;
            utc++;
        }
    }
    cout << utc << endl;

    return 0;
}