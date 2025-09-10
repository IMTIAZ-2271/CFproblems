#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while(t--){

        string b; cin >> b;
        string a="";
        int i=0;
        for( i=0; i<b.size()-2; i+=2){
            a+=b[i];
        }
        a+=b[i++];
        a+=b[i++];

        cout << a << endl;

    }

    return 0;
}