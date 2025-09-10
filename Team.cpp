#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int t1[n], t2[n], t3[n];
    int j1 = 0, j2 = 0, j3 = 0;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            t1[j1++] = i;
        }
        else if (a == 2)
        {
            t2[j2++] = i;
        }
        else if (a == 3)
        {
            t3[j3++] = i;
        }
    }
    int teamcount = min(min(j1, j2), j3);
    cout << teamcount << endl;
    for (int k = 0; k < teamcount; k++)
    {
        cout << t1[k] << " " << t2[k] << " " << t3[k] << endl;
    }
    return 0;
}