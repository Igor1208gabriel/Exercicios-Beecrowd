#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> inteiros;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int temp; cin >> temp;
        inteiros.push_back(temp);
    }
    sort(inteiros.begin(), inteiros.end());
    int maior = inteiros[n-1];
    
    for(int i = n-1; i >= 0; i--){
        if (inteiros[i] <  maior){
            cout << inteiros[i] << endl;
            break;
        }
    }
    return 0;
}
