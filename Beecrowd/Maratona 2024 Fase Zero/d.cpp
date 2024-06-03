#include <bits/stdc++.h>
using namespace std;
typedef vector<vector<int>> matriz;
typedef long long ll;
typedef unsigned long long ull;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll v, e, hora, minuto;cin >> v >> e;
    hora = ((v/e)%24 + 19)%24;
    minuto = v%e * 60/e;

    if(minuto > 60) {
        minuto-=60;
        hora++;
    }

    cout << setw(2) << setfill('0') << hora << ":" << setw(2) << setfill('0') << minuto << endl;
    return 0;
}