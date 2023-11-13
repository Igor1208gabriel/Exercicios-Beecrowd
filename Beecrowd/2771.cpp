#include <bits/stdc++.h>
using namespace std;

double resolver(int notas[], int menor, int meio, int maior, vector<double> & a){
    double media = (notas[menor]+notas[meio]+notas[maior])/3.0;
    a.push_back(media);
    if(menor == 0 and meio == menor+1 and maior == meio+1) return 1.0;
    else{
        if(!menor && meio == menor+1 && maior != meio+1)return resolver(notas,maior-3,maior-2,maior-1,a);
        else if(!menor && meio > menor+1)               return resolver(notas,meio-2,meio-1,maior,a);
        else if(menor)                                  return resolver(notas,menor-1,meio,maior,a);
    }
    return -1.0;
}

int main(){
 int n, k;
 while(cin >> n >> k){
    int notas[n];
    for(int i = 0; i < n; i++){
        cin >> notas[i];
    }
    vector<double> a;
    resolver(notas, n-3, n-2, n-1,a);
    sort(a.begin(), a.end());
    auto i = a.size()-k;
    cout << setprecision(1) << fixed << a[i] << endl;
    cerr << endl;
   }
}