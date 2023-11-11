#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector<int> vetor;
    for(int i = 0; i < n; i++){
        int temp; cin >> temp;
        vetor.push_back(temp);
    }
    sort(vetor.begin(), vetor.end());
    vetor.push_back(9000000000000);

    int res = 0, r = 0;

    for(int i = 0; i < n; i++){
        while(vetor[r] < vetor[i]+m) 
            r += 1;
        res = max(res, r-1);
    }
    cout << res;
}