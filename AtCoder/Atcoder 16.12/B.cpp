#include <iostream>
using namespace std;

int main(){
    string p1, p2; cin >> p1 >> p2;
    int dist1, dist2;
    if(abs(p1[0] - p1[1]) == 0) dist1 = 0;
    if(abs(p1[0] - p1[1]) == 1) dist1 = 1;
    if(abs(p1[0] - p1[1]) == 2) dist1 = 2;
    if(abs(p1[0] - p1[1]) == 3) dist1 = 2;
    if(abs(p1[0] - p1[1]) == 4) dist1 = 1;

    if(abs(p2[0] - p2[1]) == 0) dist2 = 0;
    if(abs(p2[0] - p2[1]) == 1) dist2 = 1;
    if(abs(p2[0] - p2[1]) == 2) dist2 = 2;
    if(abs(p2[0] - p2[1]) == 3) dist2 = 2;
    if(abs(p2[0] - p2[1]) == 4) dist2 = 1;

    if(dist1 == dist2) cout << "Yes\n";
    else cout << "No\n";
}