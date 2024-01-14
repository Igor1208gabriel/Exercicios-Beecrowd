#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> vitorias(n,0);
    for(int i = 0; i < n; i++){
        string st; cin >> st;
        for(int j = 0; j < st.size(); j++){
            if(st[j] == 'o'){
                vitorias[i]++;
            }
        }

    }

}