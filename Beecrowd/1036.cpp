#include <bits/stdc++.h> 
using namespace std;


int main(){
    bool impossivel = false;
    double a, b, c, delta, r1, r2;
    cin >> a >> b >> c;

    delta = (pow(b,2) - (4*a*c));

    if (delta <= 0){
        impossivel = true;
    }
    if (a == 0.0){
        impossivel = true;
    }

    if (!impossivel){
        r1 = ((b*-1) + sqrt(delta) ) / (2*a);
        r2 = ((b*-1) - sqrt(delta) )/ (2*a);
        cout << "R1 = " << setprecision(5) << fixed << r1 << "\n";
        cout << "R2 = " << setprecision(5) << fixed << r2 << "\n";
    }

    else{
        cout << "Impossivel calcular" << "\n";
    }
    

    return 0;
}