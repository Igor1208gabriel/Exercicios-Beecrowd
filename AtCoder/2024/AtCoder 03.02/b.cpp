#include <bits/stdc++.h>
using namespace std;
typedef vector<vector<int>> matriz;
typedef long long ll;
typedef unsigned long long ull;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    matriz x(n);
    //cerr << "\n\n\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int atual; cin >> atual;
            if(atual) cout << j+1 << " ";
        }
        cout << endl;
    }
    return 0;
}


//AC