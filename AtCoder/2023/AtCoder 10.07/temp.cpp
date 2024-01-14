#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int primeiro, segundo, anterior, atual, proximo; 
    cin >> anterior >> atual;
    primeiro = anterior;
    segundo = atual;
    int count = 0;

    for(int i = 1; i < n-1; i++){
        cin >> proximo;
        if (atual < anterior and atual < proximo)
            count++;
        if (atual > anterior and atual > proximo)
            count++;

        anterior = atual;
        atual = proximo;
    }
    if (proximo < anterior and proximo < primeiro)
        count++;
    if (proximo > atual and proximo > primeiro)
        count++;

    if (primeiro > proximo and primeiro > segundo) 
        count++;
    if (primeiro < proximo and primeiro < segundo)
        count++;


    cout << count << "\n";
}