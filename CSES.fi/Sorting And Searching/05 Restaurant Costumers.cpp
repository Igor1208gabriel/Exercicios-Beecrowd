#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> chegadas(n), saidas(n);
    for(int i = 0; i < n; i++){
        int chegada,saida; cin >> chegada >> saida;
        chegadas[i] = chegada;
        saidas[i] = saida;
    }

    sort(chegadas.begin(), chegadas.end());
    sort(saidas.begin(), saidas.end());

    int i = 0, j = 0, ans = 0, count = 0;
    while(i < n && j < n){
        if (chegadas[i] < saidas[j]){
            i++;
            count++;
        }
        else 
        if (chegadas[i] >= saidas[j]){
            j++;
            count--;
        }

        if (count > ans) ans = count;
    }
    cout << ans << endl;
}
