#include <bits/stdc++.h>
using namespace std;
 
void faz(){
    long long i,j;
    cin >> i >> j;
 
    if (i>=j){
        if (i%2==0){
            cout << (i-1)*(i-1)+(i-j)+i << "\n";
        }
        else{
            cout << (i-1)*(i-1)+j << "\n"; 
        }
        return;
    }
    if (j%2==0){
        cout << (j-1)*(j-1)+i << "\n";
        return;
    }
    cout << (j-1) * (j-1) + j+ (j-i) << "\n";
}
 
 
 
int main(){
    int t;
    cin >> t;
    while(t--){
        faz();
    }
    
    return 0;
}
