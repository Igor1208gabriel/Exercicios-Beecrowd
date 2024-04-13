#include <bits/stdc++.h>
using namespace std;
typedef vector<vector<int>> matriz;
typedef long long ll;
typedef unsigned long long ull;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, t; cin >> n >> t;
    map<int, int> v; //valor, qtd
    vector<int> jogadores(n);
    v.emplace(0, n);

    for(int i = 0; i < t; i++){
        int a, b; cin >> a >> b;
        
        auto it = v.find(jogadores[a-1]); // v[jogadores[a-1]];
        it->second -= 1;
        if (it == v.end()) 
            v.erase(it);

        jogadores[a-1] += b;
        int at = v.count(jogadores[a-1]);
        if(!at){
            v.emplace(jogadores[a-1], 1);
        } else {
            v[jogadores[a-1]]++;
        }
        cout << v.size() << endl;

        for(auto x : v){
            cerr << "[" << x.first << ", " << x.second << "]" << endl;
        }
        cerr << "[";
        for(auto x : jogadores) cerr << x << " ";
        cerr << "]\n";
    }


    return 0;
}

//não finalizado
