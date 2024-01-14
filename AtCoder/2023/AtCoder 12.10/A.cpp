#include <bits/stdc++.h>
using namespace std;

int main(){
    int qtd, min, fre, ans=0; cin >> qtd >> min >> fre;
    for(int i = 0; i < qtd; i++){
        int pro, qua; cin >> pro >> qua;
        ans += pro*qua;
    }
    if (ans < min) ans+=fre;
    cout << ans << endl;
}