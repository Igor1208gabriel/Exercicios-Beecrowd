#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, coiso=-1; cin >> n >> m;
    vector<int> fogos;
    while(m--){
        int temp; cin >> temp;
        fogos.push_back(temp);
    }
    int count = 0;
    for(int j : fogos){
        while(count <= j){
            cout << j-count;
            count++;
        }
    }
        
}