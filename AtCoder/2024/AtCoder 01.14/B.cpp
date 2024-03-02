#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, count=0; cin >> n;
    if(n %2 == 1) cout << 0;
    else{
        while(n%2 == 0){
            count++;
            n = n >> 1;
            //cerr << n << " ";
        }
        cout << count;
    }
}