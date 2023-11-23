#include <iostream>
using namespace std;

int main(){
  int x, y; cin >> x >> y;
  if( (y-x <= 2 && y-x > 0 ) || (x-y <=3 && x-y > 0) ) cout << "Yes";
  else cout << "No";
  return 0;
}