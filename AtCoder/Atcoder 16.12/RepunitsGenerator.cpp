#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<long long> repunits;
    set<long long> somas_repunits;
    long long repu = 1;
    for(int i = 0; i < 14; i++){
        repunits.push_back(repu);
        repu = repu*10 + 1;
    }

    for(int i = 0; i < 14;i++)
    for(int j = 0; j < 14;j++)
    for(int k = 0; k < 14;k++)
    {
        somas_repunits.insert(repunits[i] + repunits[j] + repunits[k]);
    }

    cout << "{";
    for(long long m : somas_repunits) cout << m << ", ";
    cout << "}";
}

