#include <bits/stdc++.h>
using namespace std;
typedef vector<vector<int>> matriz;
typedef long long ll;
typedef unsigned long long ull;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a, b=0;

    cin >> a;
    b += a;
    cin >> a;
    b += a;
    cin >> a;
    b += a;

    a = 6;
    cout << a-b << endl;
    return 0;
}