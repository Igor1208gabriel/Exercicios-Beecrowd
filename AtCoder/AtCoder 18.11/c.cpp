#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x = 0, count = 0, countmax = 0; cin >> n;
    string s; cin >> s;
    for(char i = 'a'; i <= 'z'; i++){
        for(int l = 0; l < n; l++){
            if(s[l] == i) count++;
            else count = 0;
            if (countmax < count) countmax = count;
        }
        x+=countmax;
        countmax = 0;
        count = 0;
    }
    cout << x << endl;
}
