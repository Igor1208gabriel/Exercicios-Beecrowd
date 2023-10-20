#include <bits/stdc++.h> 
using namespace std;

string ifelif(int x){
    string a;
    if(x > 9){    
        if (x == 10){
            a = "a";
        }
        if (x == 11){
            a = "b";
        }
        if(x == 12){
            a = "c";
        }
        if(x = 13){
            a = "d";
        }
        if (x = 14){
            a = "e";
        }
        if (x = 15){
            a = "f";
        }
        return a;
    }
    else{
        a = x;
        return a;
    }
}

int bintodec(int num, int pot){
    if (num == 0){
        return 0;
    }
    else{
        return num % 10 * (pow(2, pot)) + bintodec(num/10, pot+1);
    }
}

int dectobin(int num){
    if (num == 0){
        return 0;
    }
    else{
        return num % 2 + 10 * (dectobin(num/2));
    }
}

string bintohex(int num){
    if (num == 0){
        return 0;
    }
    else{
        int x = num % 1000;
        string a;
        x = bintodec(x, 0);
        a = ifelif(x);
        return string(a + bintohex(x/1000));
        
    }
}

//int func(int num, string base){
//    if (base == "bin"){
//        dec = bintodec(num, 0);
//        hex = 
//    }

//    if (base = "dec"){
//        bin = dectobin(num);
//        hex = 
//    }

//    if (base = "hex"){
//        bin = hextobin();
//        dec = bintodec(bin, 0);
//    }
//}

int main(){
    int num, n, bin, dec, hex;
    string base;
    cin >> n;

    for(int i = 0; i < n; i++){
    cin >> num;
    cout << "Case " << i+1 << ":";
    cout << bintohex(num) << "\n";
    }
}