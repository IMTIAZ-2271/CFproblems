#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);      
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int c0,c1;
        c0 = count(s.begin(), s.end(), '0');
        c1 = count(s.begin(), s.end(), '1');
        if(c1 <= k || c0 == n){
            cout << "Alice" << endl;
        }
        else {
            if(k == 1){
                cout << "Bob" << endl;
            }
            else if(n - k < k){
                cout << "Alice" << endl;
            }
            else {
                cout << "Bob" << endl;
            }
        }
    }
    return 0;
}           