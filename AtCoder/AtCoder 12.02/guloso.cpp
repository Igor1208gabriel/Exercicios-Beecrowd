#include <iostream>
using namespace std;

bool par_soma (int lista[], int soma, int tamanho){
    int i = 0, j = tamanho-1; 
    while (i <= j){
             if (lista[i] + lista[j] == soma)   return true;
        else if (lista[i] + lista[j] > soma)    j--;
        else if (lista[i] + lista[j] < soma)    i++;
    }
        return false;
}
 
int main (){
    int n, s; cin >> n >> s;
    int lista[n];

    for(int &i : lista) cin >> i;

    if (par_soma(lista, s, n)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}