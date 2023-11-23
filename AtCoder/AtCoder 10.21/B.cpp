#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> horaspossiveis(24);
    int n; cin >> n; while(n--){
        int nume; cin >> nume;
        int hora; cin >> hora;

        for(int i = 0 ; i < 9; i++){
            horaspossiveis[(9+i+hora)%24] += nume;
        }

    }

    int maior = -1;
    for(int i = 1; i < 24; i++){
    if(maior < horaspossiveis[i]) 
        maior = horaspossiveis[i];
    }
    cout << maior;
    
}