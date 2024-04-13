#include <bits/stdc++.h>
using namespace std;
typedef vector<vector<int>> matriz;
typedef long long ll;
typedef unsigned long long ull;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string n; cin >> n;
    bool y = true;
    vector<int> a = vector<int>(26, 0);

    for(unsigned int i = 0; i < n.length(); i++) a[n[i]-'a']++;
    for(auto x : a) cout << x << " ";
    cout << endl;

    //pegar a quantidade de vezes que cada numero aparece e colocar em outra lista de tamanho dinamico


    //retirando os 0
    int maior = 0;
    for(unsigned int i = 0; i < a.size(); i++){
        if(a[i] > maior) maior = a[i];
        if(a[i] == 0) a.erase(a.begin()+i);

    }

    for(auto x : a) cout << x << " ";
    cout << endl;

    vector<int> ans; ans.push_back(0); ans.push_back(0);
    unsigned int i = 0;
    int j=1;

    while(j <= maior){
        if(a[i] == j) {ans[j]++; a.erase(a.begin()+i);}
        i++;
        if(i == a.size()){j++; i=0; ans.push_back(0);}
        cout<< i << " " << j << endl;
    }


    cout << endl << endl;
    for(auto x : ans) cout << x << " ";
    cout << endl << endl;

    for(unsigned int i = 0; i < ans.size(); i++) if(ans[i] != 0 || ans[i] != 2) y = false;
    if(y) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}