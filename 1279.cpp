#include <bits/stdc++.h> 
using namespace std; 

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    long long ano;
    bool bissexto, huluculu;

    while (cin >> ano){
        bissexto = false;
        huluculu = false;

        if ((ano % 4 == 0) and ((ano % 100 != 0) or (ano % 400 == 0))){
            bissexto = true;
            cout << "This is leap year." << "\n";
        }
        if (ano % 15 == 0){
            huluculu = true;
            cout << "This is huluculu festival year." << "\n";
        }
        if ((ano % 55) and (bissexto)){
            cout << "This is bulukulu festival year." << "\n";
        }
        if((!huluculu) and (!bissexto)){
            cout << "This is an ordinary year." << "\n";
        }
        cout << "\n";
    }
    cin << ano;

    
    return 0;
}