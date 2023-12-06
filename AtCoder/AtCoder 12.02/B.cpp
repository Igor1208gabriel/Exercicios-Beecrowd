#include <bits/stdc++.h>
using namespace std;

int achar(int n, int s, int m, int l){
    if (n <= 0) return 0;
    else{
        int S = s + achar(n-s, s, m, l);
        int M = m + achar(n-m, s, m, l);
        int L = l + achar(n-l, s, m ,l);
        int x = min(S, M);
        int y = min(x, L);
        return y;
    }
}

int main(){
    int n, s, m, l; cin >> n >> s >> m >> l;
    cout << endl;
    cout << achar(n, s, m, l);
}   








