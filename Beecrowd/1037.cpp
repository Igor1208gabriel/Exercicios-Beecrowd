#include <bits/stdc++.h> 
using namespace std;


int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    float in;
    cin >> in;
    if(0 <= in and in <= 25){
    cout << "Intervalo [0,25]" << "\n";

    }
    if(25 < in and in <= 50){
    cout << "Intervalo (25,50]" << "\n";
        
    }
    if(50 < in and in <= 75){
    cout << "Intervalo (50,75]" << "\n";
        
    }
    if(75 < in and in <= 100){
        cout << "Intervalo (75,100]" << "\n";
    }
    if (in < 0 or in > 100){
        cout << "Fora de intervalo" << "\n";
    }

    return 0;
}