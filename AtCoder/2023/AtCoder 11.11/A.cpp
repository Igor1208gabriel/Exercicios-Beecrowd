#include <iostream>
using namespace std;

int main(){
    int n, x ans = 0;
    cin >> n >> x;
    while(n--){
        int temp; cin >> temp;
        if(temp <= x) ans+=temp;
    }
    cout << ans;
}