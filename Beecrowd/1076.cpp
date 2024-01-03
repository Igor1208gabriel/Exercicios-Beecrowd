#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> vt;
vector<bool> visitado;
int ans = 0;

void dfs(int este){
    visitado[este] = true;
    ans++;
    //cerr << este << " ";
    for(int v : vt[este]){
        if(!visitado[v]) {dfs(v); ans++;}
    }
}

int main(){
    int T; cin >> T;

    while(T--){
        int n; cin >> n;
        int v, a; cin >> v >> a;
        vt.resize(v);
        visitado.resize(v);
        for(int i = 0; i < a; i++){
            int x, y; cin >> x >> y;
            vt[x].push_back(y);
            vt[y].push_back(x);
        }
        dfs(n);
        cout << --ans << "\n";
        
        vt.clear();
        visitado.clear();
        ans = 0;
    }
}