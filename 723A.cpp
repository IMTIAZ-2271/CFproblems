#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> Ox(4);
    for(int i=0; i<3; i++){
        cin >> Ox[i];
    }
    sort(Ox.begin(),Ox.begin()+3);
    cout << abs(Ox[1]-Ox[0]) + abs(Ox[2]-Ox[1]) << endl;
    return 0;

}