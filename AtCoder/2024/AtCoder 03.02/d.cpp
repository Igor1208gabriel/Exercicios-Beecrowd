#include <bits/stdc++.h>
using namespace std;
typedef vector<vector<int>> matriz;
typedef long long ll;
typedef unsigned long long ull;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, t; cin >> n >> t;
    vector<ll> ptsjogadores(n);
    for(int i = 0; i < t; i++){
        int qual; ll quanto;
        cin >> qual >> quanto;
        ptsjogadores[qual-1] += quanto;
    }
    return 0;
}

//não finalizado