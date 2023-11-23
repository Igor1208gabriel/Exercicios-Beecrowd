#include <bits/stdc++.h>
using namespace std;

int main(){
    bool prefixo = true, sufixo = true; 
    int n, m; cin >> n >> m; //inutil
    string s, t; cin >> s >> t;

    for(unsigned int i = 0; i < s.size(); i++){
        if (t[i] != s[i]){  
            prefixo = false;
        }
        if (t[t.size()-i] != s[s.size()-i]){
            sufixo = false;
        }
    }
    if( prefixo and  sufixo) cout << 0 << "\n";
    if( prefixo and !sufixo) cout << 1 << "\n";
    if(!prefixo and  sufixo) cout << 2 << "\n";
    if(!prefixo and !sufixo) cout << 3 << "\n";
}
