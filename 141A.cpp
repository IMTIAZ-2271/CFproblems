#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3;
    s4 = s1 + s2;
    int count = 0;
    if (s4.size() == s3.size())
    {
        for (int i = 0; i < s4.size(); i++)
        {
            for (int j = 0; j < s3.size(); j++)
            {
                if (s3[j] == s4[i])
                {
                    count++;
                    s3[j] = '#';
                    break;
                }
            }
        }
        if (count == s4.size())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}