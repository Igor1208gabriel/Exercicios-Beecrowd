#include <bits/stdc++.h> 
using namespace std;


int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    double a, b, c;
    cin >> a >> b >>c;
    
    double triangulo, circulo, trapezio, quadrado, retangulo;
    triangulo = (a*c)/2;
    circulo = 3.14159 * c * c;
    trapezio = (a * c) + ((b-a)/2)*c;
    quadrado = b*b;
    retangulo = a*b;

    cout << "TRIANGULO: " << setprecision(3) << fixed << triangulo << "\n";
    cout << "CIRCULO: " << setprecision(3) << fixed << circulo << "\n";
    cout << "TRAPEZIO: " << setprecision(3) << fixed << trapezio << "\n";
    cout << "QUADRADO: " << setprecision(3) << fixed << quadrado << "\n";
    cout << "RETANGULO: " << setprecision(3) << fixed << retangulo << "\n";

    return 0;
}