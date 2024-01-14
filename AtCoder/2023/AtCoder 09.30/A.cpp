#include <bits/stdc++.h>
using namespace std;

int main(){
    string abc;
    bool tf = false;
    cin >> abc;
    cin >> abc;
    for(unsigned int i = 0 ; i < abc.size()-2; i++){
        if( (abc[i] == 'A') and (abc[i+1] == 'B') and (abc[i+2] == 'C') ){
        cout << i+1 << "\n";
        tf = true;
        break;
        }
    }
    if (!tf) cout << -1 << "\n";
}