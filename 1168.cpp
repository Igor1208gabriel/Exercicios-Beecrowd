#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, num, ans=0;
    cin >> n;
    int lista[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    while (n--){
        cin >> num;
        while(num){
            ans += lista[(num%10)];
            num = num/10;
        }
        cout << ans << " leds\n";
        ans = 0;
    }
}