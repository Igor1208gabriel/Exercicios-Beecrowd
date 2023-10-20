#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, count = 0;
    while(cin >> n){
        int tamanho[n];
        bool des[n]{0};
        for(int i = 0; i < n; i++){
            int calcado; cin >> calcado;
            char de; cin >> de;
            des[i] = calcado;
            if(de == 'D') des[i] = true;
            if(de == 'E') des[i] = false;
        }
        for(int j = 0; j < n; j++){
            for(int k = j+1; k < n; k++){
                if(tamanho[j] == tamanho[k] && des[j] == des[k]){
                    cout << "FOI " << tamanho[k] << " " << des[k] << " " << tamanho[j] << " " << des[j] << endl;
                    count++;
                }
            }
        }
        cout << count << "\n";
    }
}