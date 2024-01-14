#include <bits/stdc++.h>
using namespace std;

int main(){
    int nrounds, notabase, temp, ans, maximo = 0, minimo = 101, soma = 0;
    cin >> nrounds >> notabase;
    vector<int> notas(nrounds-1);

    for(int i = 0; i < nrounds-1; i++){
        cin >> temp;
        notas[i] = temp;
    }
    
    for(int i : notas){
        if (i > maximo){
            maximo = i;
        }
        if (i < minimo){
            minimo = i;
        } 
        soma += i;
    }

    temp = soma - (maximo + minimo);
    ans = notabase - temp;

    if (ans > 100){ans = -1;}
    if (ans == 100){ans = 0;}

    cout << "\nDEBUG " << soma << " " << maximo << " " << minimo << "\n";
    cout << ans << "\n";

}