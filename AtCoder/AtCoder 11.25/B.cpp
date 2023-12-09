#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> a, int l, int r, int n){
    vector<int> resultado;
    int xi;
    for(auto ai : a){
        if(ai < l) xi = l;
        else if (ai > r) xi = r;
        else xi = ai;
        resultado.push_back(xi);
    }
    return resultado;
}

int main(){
    int n, l, r; cin >> n >> l >> r;
    vector<int> a;
    for(int i = 0; i < n; i++){
        int temp; cin >> temp;
        a.push_back(temp);
    }
    vector<int> ans = solve(a, l, r, n);
    for(unsigned int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}