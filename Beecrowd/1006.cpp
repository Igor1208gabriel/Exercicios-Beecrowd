#include <bits/stdc++.h> 
using namespace std;


int main(){
    float a, b, c, ans;
    cin >> a >> b >> c;
    a = a * 2.0;
    b = b * 3.0;
    c = c * 5.0;
    ans = (a + b + c);

    cout << "MEDIA = " << setprecision(1) << fixed << ans / 10 << "\n";
    return 0;
}