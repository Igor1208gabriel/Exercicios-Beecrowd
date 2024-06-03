#include <bits/stdc++.h>
using namespace std;
typedef vector<vector<int>> matriz;
typedef long long ll;
typedef unsigned long long ull;

vector<bool> memo

int primo(int x){
    if(x == 1) {
        return false;
    }

    for(int i = 2; i * i <= x; i++) {
        if(x % i == 0) {
            return false;
        }
    }
    return true;
}

int encontrar_par(int x){
    int a = -1;
    for(int i = x/2; i < 0; i++){
        if(!primo(i) && !primo(x-i)){
            return a;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;

    for(int j = 0; j < t; j++){
        int a; cin >> a;
        
        int um = encontrar_par(a);
        if (um == -1) cout << -1 << endl;

        else cout << um << " " << a-um << endl;
    }

    
    return 0;
}