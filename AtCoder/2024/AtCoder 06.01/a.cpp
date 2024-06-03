#include <bits/stdc++.h>
using namespace std;
typedef vector<vector<int>> matriz;
typedef long long ll;
typedef unsigned long long ull;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, l, r; 
    cin >> n >> l >> r;
    
    vector<int> li;
    for(int i = 1; i <=n; i++){
        li.push_back(i);
    } 
    reverse(li.begin()+l-1, li.begin()+r-1);
    for(auto i : li) cout << i << " ";
    cout << endl;
    return 0;
}