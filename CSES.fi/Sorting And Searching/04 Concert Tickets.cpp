#include <bits/stdc++.h>
using namespace std;

int main(){
    int nt, nc; cin >> nt >> nc;
    vector<int> clientes;
    map<int,int> mapa;
    for(int i = 0; i < nt; i++){
        int temp; cin >> temp;
        if(mapa[temp] >= 1) mapa[temp]++;
        else mapa[temp] = 1;
    }

    for(int i = 0; i < nc; i++){
        int num; cin >> num;
        auto it = mapa.upper_bound(num);
        if (it != mapa.begin()){
            it--;
            cout << it->first << "\n";
            it->second--;
            if(! it->second) 
                mapa.erase(it);
        } else {
            cout << "-1\n";
        }
    }
}