#include<bits/stdc++.h>
using namespace std;
int main(){
     long long int n,k;
    cin >> n >> k;
    while(k> 0){
        if(n % 10 == 0){
            n /= 10;
            k--;
        } 
        else if(k<= n%10){
            n -= k;
            k = 0;
        } 
        else {
            k -= n % 10;
            n -= n % 10;
        }
    }
    cout << n << endl;

    return 0;
}