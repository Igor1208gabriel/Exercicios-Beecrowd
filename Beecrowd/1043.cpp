#include <bits/stdc++.h>
using namespace std;

int main(){
    float a, b, c;
    cin >> a >> b >> c;

    if(a < (b+c) && b < (a + c) && c < (a + b)){
        cout << fixed << setprecision(1) << "Area = " << ((a+b)*c)/2 << endl;
    } else {
        cout << fixed << setprecision(1) << "Perimetro = " << a+b+c << endl;
    }

    return 0;
}