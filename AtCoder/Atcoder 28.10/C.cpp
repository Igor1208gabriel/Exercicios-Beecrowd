#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,m; cin >> n >> m;
    vector<int> a(n);
    for(int i = 0; i < n; i ++){
        int temp; cin >> temp;
        a[i] = temp;
    }
    sort(a.begin(), a.begin()+n);

    vector<int> b(n);
    for(int i = 0; i < n; i++){
        int count = 0;

        for(int j = 0; j < n; j++){

            if(i <= a[j] and a[j] < i+m){
                count++;
            }
        }
        b[i] += count;
    }

    cout << *max_element(b.begin(), b.end());


}