#include <bits/stdc++.h> 
using namespace std;


int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    if ((a % b == 0) or (b % a == 0)){
        cout << "Sao multiplos";
    } 
    else{
        cout << "Nao sao multiplos";
    }

    return 0;
}