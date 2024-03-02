#include <bits/stdc++.h>
using namespace std;
typedef vector<vector<int>> matriz;
typedef long long ll;
typedef unsigned long long ull;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a, b; cin >> a >> b;
    int notans = a+b;
    int ans = 9;
    if (notans == 9) ans = 8;
    cout << ans << endl;
    return 0;
}

//AC