#include <bits/stdc++.h>
using namespace std;

int main(){
    string n; cin >> n;
    bool teste = true;

    if (n.size() > 1){
        for(unsigned i = 0; i < n.size()-1; i++){
            if (int(n[i]) <= int(n[i+1])){
                teste = false;
            }
        }
    }

    if (teste == true) cout << "Yes\n";
    else {cout << "No\n";}
}
