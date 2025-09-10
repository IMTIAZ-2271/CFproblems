#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, t;
    cin >> n >> t;
    vector<long long> book_time(n);
    for (int i = 0; i < n; i++) {
        cin >> book_time[i];
    }

    long long sum = 0, l = 0, max_books = 0;
    for (long long r = 0; r < n; r++) {
        sum += book_time[r];

        while (sum > t) {
            sum -= book_time[l];
            l++;
        }

        max_books = max(max_books, r - l + 1);
    }

    cout << max_books << endl;
    return 0;
}
