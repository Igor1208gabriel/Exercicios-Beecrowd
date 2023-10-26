#include <bits/stdc++.h>
using namespace std;
 
void tabuleiro(int c){
    long long comb_total = (( pow(c,4) - pow(c,2) ) /2);
    long long comb_invalidas = (4*(pow(c,2))) - (12*c) + (8);
    long long comb_validas = comb_total - comb_invalidas;
    cout << comb_validas << "\n";
    return;
}
 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    long long c = 0;
    while (n--){
        c++;
        tabuleiro(c);
    }
}
