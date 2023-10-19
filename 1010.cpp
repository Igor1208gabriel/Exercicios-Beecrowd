#include <bits/stdc++.h>
using namespace std;

int main(){
    int inutil, qt1, qt2;
    float p1, p2, ans;
    cin >> inutil >> qt1 >> p1 >> inutil >> qt2 >> p2;
    ans = (p1*qt1) + (p2*qt2);
    cout << "VALOR A PAGAR: R$ " << setprecision(2) << fixed << ans << "\n";
}