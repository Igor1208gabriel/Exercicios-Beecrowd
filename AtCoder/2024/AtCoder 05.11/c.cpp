#include <bits/stdc++.h>
using namespace std;
typedef vector<vector<int>> matriz;
typedef long long ll;
typedef unsigned long long ull;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin >> n;

    vector<int> ans(n);
    for(auto &x : ans) cin >> x;

    int soma = accumulate(ans.begin(), ans.end(), 0) * (n-1);
    sort(ans.begin(), ans.end());

    


    return 0;
}