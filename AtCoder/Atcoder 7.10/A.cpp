#include <bits/stdc++.h>
using namespace std;

int main(){
    bool tf = true;
    string s; cin >> s;

    for(int i = 1; i <= 16; i +=2){
        if (s[i]=='1'){
            cout << "No\n";
            tf = false;
            break;
        }
    }
    if(tf){
        cout << "Yes\n";
    }
}
