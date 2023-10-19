#include <bits/stdc++.h> 
using namespace std;


int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    int n, b, p;
    cin >> n;
    if(n % 2 == 0){
        b = (n*n)/2;
        p = (n*n)/2;
    }
    else{
        b = ((n*n)/2)+1;
        p = ((n*n)/2);
    }
    cout << b << " casas brancas e " << p << " casas pretas" << "\n";

    return 0;
}