#include <bits/stdc++.h> 
using namespace std;

vector<int> solve(int foi, vector<int> volt){
    vector<int> ans;
    
    int a = 1, b = 0;
    while(a < foi){
        cerr << "a: " << a << "\nb: " << b << "\nv: " << volt[b] << "\n";
        if(b == volt.size()-1){
            ans.push_back(a); a++;
            cerr << 1 << endl << endl;
        }
        if(a < volt[b]) {ans.push_back(a); a++; cerr << 2 << endl << endl;}
        if(a == volt[b]) {a++; if(b < volt.size()-2) b++; cerr << 3 << endl << endl;}
    }

    cerr << endl << endl << endl;
    for(auto x : ans) cerr << x << " ";

    return ans;
}

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    int foi, voltou;
    while(cin >> foi >> voltou){
        vector<int> volt;
        for(int i = 0; i < foi; i++) {
            int x; cin >> x;
            volt.push_back(x);
        }
        vector<int> ans = solve(foi, volt);
        if(ans.size() == 0) cout << "*";
        else for(int i : ans) cout << i << " ";

        cout << endl;
    }

    return 0;
}