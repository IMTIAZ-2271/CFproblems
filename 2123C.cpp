#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);      
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<long long int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        vector <long long int> prmin(n);
        prmin[0] = v[0];
        for (int i = 1; i < n; i++) {
            prmin[i] = min(prmin[i-1], v[i]);
        }
        vector <long long int> suffmax(n);
        suffmax[n-1] = v[n-1];
        for (int i = n-2; i >= 0; i--) {
            suffmax[i] = max(suffmax[i+1], v[i]);
        }

        cout << 1;
        for(int i = 1; i < n-1; i++){
            if(prmin[i] == v[i] || v[i] == suffmax[i]){
                cout << 1;
            } else {
                cout << 0;
            }
        }
        cout << 1 << '\n';
    }
    return 0;
}