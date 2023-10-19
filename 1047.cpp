#include <bits/stdc++.h> 
using namespace std;


int main(){
    int hi, mi, hf, mf, dh, dm;
    cin >> hi >> mi >> hf >> mf;

    if(hf >= hi){
        dh = hf - hi;
    }
    
    else{
        dh = 24-hi+hf;
    }


    if(mf >= mi){
        dm = mf - mi;
    }

    else{
        dm = 60 - mi + mf;
        dh--;
    }

    if(dm == 0 and dh == 0){
        dh = 24;
    }

    cout << "O JOGO DUROU " << dh << " HORA(S) E " << dm << " MINUTO(S)" << "\n";
    return 0;
}