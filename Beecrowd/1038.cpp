#include <bits/stdc++.h>
using namespace std;
typedef vector<vector<int>> matriz;
typedef long long ll;
typedef unsigned long long ull;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a[6] = {0, 400, 450, 500, 200, 150}, b, c;
    cin >> b >> c;
    cout << "Total: R$ " << (a[b] * c)/100 << "." << setfill('0') << setw(2) << (a[b] * c)%100 << endl;
    return 0;
}