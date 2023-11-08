#include <bits/stdc++.h>
using namespace std;

int main(){
    int nc, pm; cin >> nc >> pm;
    int x = nc;
    vector<int> lc;
    while(x--){
        int temp; cin >> temp;
        lc.push_back(temp);
    } 
    sort(lc.begin(), lc.end());


    int i = 0, j = nc-1, count = 0;
    while(i <= j){
        if(lc[i] + lc[j] <= pm){
            count++;
            i++;
            j--;
        }
        else{
            count++;
            j--;
        }
    }

    cout << count << "\n";
}

