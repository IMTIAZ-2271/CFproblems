#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int Y,W;
    cin >> Y >> W;
    int mx = max(Y,W);
    int div=__gcd(6-mx+1,6);
    cout << (6-mx+1)/div << "/" << 6/div << endl;
    return 0;
}