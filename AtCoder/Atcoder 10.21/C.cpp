#include <bits/stdc++.h>
using namespace std;

//o código só funciona quando não tem radares nas últimas ou primeiras linhas ou colunas    (####)
//                                                                                          (#..#)
//                                                                                          (#..#)
//                                                                                          (####)

int main(){
    int colunas, linhas;
    cin >> colunas >> linhas;
    vector<vector<char>> ph(linhas, vector<char>(colunas));
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            char este; cin >> este;
            ph[i][j] = este;
        }
    }
    int count = 0;
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            if(ph[i][j] == '#'){
                count++;
                if(i <= linhas-1 and i >= 1 and j <= colunas-1 and j > 1){
                    if(ph[i+1][j  ] == '#') ph[i+1][ j ] = 'o'; //cima
                    if(ph[i-1][j  ] == '#') ph[i-1][j  ] = 'o'; //biaxo
                    if(ph[i  ][j-1] == '#') ph[i  ][j-1] = 'o'; //esquerda
                    if(ph[i  ][j+1] == '#') ph[i  ][j+1] = 'o'; //direita
                    if(ph[i+1][j+1] == '#') ph[i+1][j+1] = 'o'; //cimadireita
                    if(ph[i+1][j-1] == '#') ph[i+1][j-1] = 'o'; //cimaesquerda
                    if(ph[i-1][j+1] == '#') ph[i-1][j+1] = 'o'; //baixodireita
                    if(ph[i-1][j-1] == '#') ph[i-1][j-1] = 'o'; //baixoesquerda
                }
            }
            if(ph[i][j] == 'o'){
                if(i <= linhas-1 and i >= 1 and j <= colunas-1 and j > 1){
                    if(ph[i+1][j  ] == '#') ph[i+1][j  ] = 'o'; //cima
                    if(ph[i-1][j  ] == '#') ph[i-1][j  ] = 'o'; //biaxo
                    if(ph[i  ][j-1] == '#') ph[i  ][j-1] = 'o'; //esquerda
                    if(ph[i  ][j+1] == '#') ph[i  ][j+1] = 'o'; //direita
                    if(ph[i+1][j+1] == '#') ph[i+1][j+1] = 'o'; //cimadireita
                    if(ph[i+1][j-1] == '#') ph[i+1][j-1] = 'o'; //cimaesquerda
                    if(ph[i-1][j+1] == '#') ph[i-1][j+1] = 'o'; //baixodireita
                    if(ph[i-1][j-1] == '#') ph[i-1][j-1] = 'o'; //baixoesquerda
                }
            }
        }
    }
    cout << count << endl << endl << endl;

    
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
         cout << ph[i][j];
         }
         cout << endl;
     }
}
