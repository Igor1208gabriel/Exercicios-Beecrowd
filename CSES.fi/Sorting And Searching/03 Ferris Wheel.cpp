#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main(){
    int n, x; cin >> n >> x;
    vector<int> criancas(n);
    for(int i = 0; i < n ; i++){
        cin >> criancas[i];
    }
 
    sort(criancas.begin(), criancas.end());
    int ans = 1, pesomax = x;
    for(int i = 0; i < n; i++){
        if(pesomax - criancas[i] >= 0)
            pesomax -= criancas[i];
        else{
        pesomax = x-criancas[i];
        ans++;
        }    
    }
    cout << ans;
}
