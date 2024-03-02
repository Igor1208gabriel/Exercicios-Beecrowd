#include <bits/stdc++.h>
using namespace std;
typedef vector<vector<int>> matriz;
typedef long long ll;
typedef unsigned long long ull;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<ll> ans = {0, 1, 8, 343, 1331, 1030301, 1367631, 1003003001, 10662526601, 1000300030001, 1030607060301, 1334996994331, 1000030000300001, 1033394994933301, 1331399339931331, 1000003000003000001, 1003006007006003001, 1331039930399301331}; //BEM mais que 10^18
    ll x; cin >> x;
    ll p = 0;
    for(unsigned int i = 0; i < ans.size(); i++){
        if(x >= ans[i]) p = ans[i];  
    }
    cout << p << endl;
    
    return 0;
}

//AC