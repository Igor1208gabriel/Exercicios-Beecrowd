#include <bits/stdc++.h>
using namespace std;

int reduz(long long w, long long f){
    if ((w-f) < 0) return 0;
    if ((w-f) >= 0){
        return 1 + reduz((w-f), (f+1));
    }
}

int main(){
    int n;
    long long w, ans;
    cin >> n;
    while(n--){
        cin >> w;
        ans = reduz(w,1);
        cout << ans << "\n";
    }
    return 0;
} 

// deu tudo errado e no fim só usou fórmula. estou chateado e meu código é lindo