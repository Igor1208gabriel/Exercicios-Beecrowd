#include <iostream>
using namespace std;

int achar(int n){
    int c = n/100;
    int d = (n/10)%10;
    int u = n%10;

    if(c*d == u) return n;
    else return achar(n+1);
}

int main(){
    int n; cin >> n;
    cout << achar(n);
}