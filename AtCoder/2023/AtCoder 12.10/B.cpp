#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, g=0, m=0, mg, mm; cin >> k >> mg >> mm;

    for(int i = 0; i < k; i++){
        if(g == mg) {g=0;}
        else if (m == 0) {m = mm;}
        else {
            g += m;
            m = g-mg;
            if(m < 0) m = 0;
            g -= m;
        }
    }
    cout << g << " " << m << "\n";
}

