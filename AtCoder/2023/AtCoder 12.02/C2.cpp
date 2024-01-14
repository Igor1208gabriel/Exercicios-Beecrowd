#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> numeros(n);
    vector<int> ans(n);

    for(int i = 0; i < n; i++){
        cin >> numeros[i];
        }

        

    for(int este = 0; este < n; este++)
        for(int it = 0; it < n; it++)
            if(numeros[it] > numeros[este]) ans[este]+=numeros[it];


    for(auto i : ans) cout << i << " ";
    cout << endl;
}