#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, plainmax, logomax=0, logo=0, compras=0; cin >> n >> plainmax;
    int plain = plainmax;
    string s; cin >> s;
    for(int i = 0; i < n; i++){
        if (s[i] == '1') {
            if (plain > 0) plain--;
            else if (logo > 0) logo--;
            else {
                compras++; 
                logomax++;
                for(int j = logomax; j < compras; j--){
                    mais um monte de coisa;
                    }
                }
        }
        if(s[i] == '2'){
            if(logo > 0) logo--;
            else {compras++; logomax++;}
        }
        if(s[i] == '0'){
            plain = plainmax;
            logo = logomax;
            while(logo--){ummontedecoisa;}
        }
    }
    cout << compras << "\n";
}