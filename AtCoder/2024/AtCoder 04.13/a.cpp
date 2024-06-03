#include <bits/stdc++.h>
using namespace std;
typedef vector<vector<int>> matriz;
typedef long long ll;
typedef unsigned long long ull;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, f=0; cin >> n;
    for(int i = 0; i < n-1; i++){
        int t; cin >> t;
        f += t;
    }
    cout << f * (-1) << endl;
    return 0;
}