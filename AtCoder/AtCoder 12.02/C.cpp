#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<pair<int,int>> numeros(n);

    for(int i = 1; i <= n; i++){
        numeros[i-1].first = i;
        int temp; cin >> temp;
        numeros[i-1].second = temp;
    }

    sort(numeros.begin(), numeros.end(), [](auto &left, auto &right) { 
        return left.second > right.second; 
    });

    vector<pair<int,int>> ans(n);
    for(int i = 0; i <n; i++){
        ans[i].first = numeros[i].first;
    }

    int aquele =0;
    for(int este = n-1; este <=0; este--){
        if(numeros[este] != )
    }

}