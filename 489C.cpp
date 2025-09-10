#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, s;
    cin >> m >> s;
    if (m > 1 && s == 0)
    {
        cout << "-1 -1" << endl;
        return 0;
    }
    else if(m==1 && s==0){
        cout << "0 0" << endl;
        return 0;
    }
    else if(s>9*m){
        cout << "-1 -1" << endl;
        return 0;

    }
    deque<int> Largest, Smallest;

    int Lastended = 0;
    int temp = m;
    int ninecount = (int)s / 9;
    if (s % 9 == 0)
    {
        Lastended = 9;

        for (int i = 0; i < ninecount - 1; i++)
        {
            Largest.push_back(9);
            Smallest.push_back(9);
        }
        temp -= ninecount - 1;
        Largest.push_back(9);
        if (temp == 1)
        {
            Smallest.push_front(9);
        }
        else
        {
            Smallest.push_front(8);
        }
        for (int i = 0; i < m - ninecount; i++)
        {

            if (i == m - ninecount - 1)
            {
                Largest.push_back(0);
                Smallest.push_front(1);
            }
            else
            {
                Largest.push_back(0);
                Smallest.push_front(0);
            }
        }
    }
    else
    {
        Lastended = s % 9;

        for (int i = 0; i < ninecount; i++)
        {
            Largest.push_back(9);
            Smallest.push_back(9);
        }
        temp -= ninecount;

        Largest.push_back(s % 9);
        if (temp == 1)
        {
            Smallest.push_front(Lastended);
        }
        else
        {
            Smallest.push_front(Lastended - 1);
        }
        for (int i = 0; i < m - ninecount - 1; i++)
        {

            if (i == m - ninecount - 2)
            {
                Largest.push_back(0);
                Smallest.push_front(1);
            }
            else
            {
                Largest.push_back(0);
                Smallest.push_front(0);
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        cout << Smallest.front() ;
        Smallest.pop_front();
    }
    cout << " ";
    for (int i = 0; i < m; i++)
    {
        cout << Largest.front();
        Largest.pop_front();
    }
    
    

    return 0;
}