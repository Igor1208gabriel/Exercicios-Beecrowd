#include <bits/stdc++.h>
using namespace std;
typedef vector<vector<int>> matriz;
typedef long long ll;
typedef unsigned long long ull;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m; cin >> n >> m;
    
    //matriz a;
    //a.resize(n);

    vector<int> b;
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        b.push_back(x);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int x; cin >> x;
            b[j] -= x;
            //a[i].push_back(x);
        }
    }

    //for(auto x : a) {for(auto y : x) cout << y; cout << endl; }


    bool ans = true;
    for(auto x : b) if (x > 0) {ans = false; break;}

    if(ans) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}