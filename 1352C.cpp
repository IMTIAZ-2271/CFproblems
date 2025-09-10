#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--){
        long long int n,k;
        cin >> n >> k;
        long long int ans;
        long long int temp;
        if(k%(n-1)==0){
           temp = (long long)k/(n-1) - 1;
           ans=n*temp+n-1;
        }
        else{
            temp= (long long)k/(n-1);
            ans=n*temp+ (k%(n-1));
        }
        cout << ans << endl;
    }

    return 0;
}