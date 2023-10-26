#include <bits/stdc++.h>
using namespace std;

int main(){
    int n_criancas, max_gondola; cin >> n_criancas >> max_gondola;
    int criancas[n_criancas];

    for(int i = 0; i < n_criancas; i++){
        int temp; cin >> temp;
        criancas[i] = temp;
    }

    sort(criancas, criancas+n_criancas);
    int count = 0;

    int i = 0, j = n_criancas-1; 
    bool conseguiu[n_criancas];

    while(i < j){
        if (criancas[i]+criancas[j] > max_gondola) j--;
        else {
            count++;
            conseguiu[i] = conseguiu[j] = true;
            j--;
            i++;
            }
        count++;
    }

    for(int i = 0; i < n_criancas; i++){
        count += conseguiu[i] == false;
    }

    cout << count << "\n";
} 
    }
    cout << ans;
}
