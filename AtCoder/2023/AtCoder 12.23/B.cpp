#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);

    long long a, m, l, r; cin >> a  >> m >> l >> r;

    long long n;

    n = floor((r-a)/m) - ceil((l-a)/m) +1;

    cout << n << endl;

    return 0;
}