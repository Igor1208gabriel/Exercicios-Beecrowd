#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q, ans = 0; cin >> n >> q;
    string S; cin >> s;

    for(int i = 0; i < q; i++){ //q
        int comeco, fim; cin >> comeco >> fim;
        for(int i = comeco; i < fim-1; i++){    //fim-comeco
            if(S[i] == S[i+1]) ans++;
        } 
        cout << ans << endl;
        ans = 0;
    }
}

O(q * (fim-comeco) )
O(N²)




