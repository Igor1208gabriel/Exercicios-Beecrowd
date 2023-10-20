#include <bits/stdc++.h> 
using namespace std;


int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    double raio, volume, pi = 3.14159;
    cin >> raio;
    volume = (4.0/3.0) * pi * raio * raio * raio;

cout << "VOLUME = " << setprecision(3) << fixed << volume << "\n";

    

    return 0;
}