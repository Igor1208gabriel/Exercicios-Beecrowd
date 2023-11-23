#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    cout << s[0];
    for(unsigned int i = 1; i < s.size(); i++){
        cout << " " << s[i];
    }
    cout << endl;
    return 0;
}
