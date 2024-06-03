#include <bits/stdc++.h>
using namespace std;
typedef vector<vector<int>> matriz;
typedef long long ll;
typedef unsigned long long ull;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, j=2, i=0; cin >> n;
    
    while(true){
        if (pow(j,i) - 1 <= n) i++;
        else {cout << i << endl; break;}
    }

    return 0;
}