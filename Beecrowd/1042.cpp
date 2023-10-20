#include <bits/stdc++.h> 
using namespace std;


int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    int a, b, c, temp;
    cin >> a >> b >> c;

    int ah[3] = {a, b, c};

    for (int j = 0; j < 3; j++){
    for (int i = 0; i < 2; i++){
        if(ah[i] > ah[i+1]){
            temp = ah[i];
            ah[i] = ah[i+1];
            ah[i+1] = temp;
        }
    }
    }

    cout << ah[0] << "\n" << ah[1] << "\n" << ah[2] << '\n' << '\n' << a << "\n" << b << "\n" << c << "\n";

    return 0;
}