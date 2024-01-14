#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);   
    cin.tie(NULL);

    long long d; cin >> d;
    long long x = sqrt(d);
    long long y = 0;
    
    long long este = x*x + y*y;
    long long ans = abs(este - d);

    while(abs(este - d) != 0 && x > 0){
        if (este > d) 
            x--;
        else if(este < d) 
            y++;
        else 
            break;        
        este = x*x + y*y;
        if(abs(este - d) < ans) ans = abs(este -d);
    }
    cout << ans;
}