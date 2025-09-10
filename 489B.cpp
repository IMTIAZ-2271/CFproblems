#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    vector<int> boys(n);
    for(int i=0; i<n; i++)cin >> boys[i];

    sort(boys.begin(),boys.end());

    int m; cin >> m;
    vector<int>girls(m);
    for(int i=0; i<m; i++)cin >> girls[i];

    sort(girls.begin(),girls.end());
   
    int b=n-1,g=m-1;
    int pair=0;
    while(b>=0 && g>=0){
        if(abs(boys[b]-girls[g])<=1){pair++;b--; g--;}
        else{
            if(boys[b]>girls[g]){b--;}
            else if(girls[g]>boys[b]){g--;}
            //else{b--; g--;}
        }
    }

    cout << pair << endl;


    return 0;
}