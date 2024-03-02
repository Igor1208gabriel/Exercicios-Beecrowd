#include <bits/stdc++.h>
using namespace std;

/*
Solução errada. Mesmo que eu conseguisse gerar os aprox. 10^12 números,
e colocasse a saída deste código na fonte do main,
seria MUITA memória gasta. O jeito seria fazer algum algoritmo 
em tempo constante para gerar um número baseado em um input, 
ou um jeito de gerar todos os good numbers pulando todos os não good numbers.
provavelmente com alguma manipulação de bit que não consegui fazer.
*/

bool checkdigits(int x){
    while(x >= 1){
        if (x%2 == 1) return false;
        x = x / 10;
    }
    return true;
}

int main(){
    long long x = pow(10,12)+100;
    cout << "{ ";
    for(long long i = 0; i < x; i=i+2){
        if(checkdigits(i)) cout << i << ", ";
    }
    cout << " }"; 
}