#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
  int T;
  double L, D, R, a;
  cin >> T;
  while(T--){
    cin >> L >> D >> R;
    a = 4*R*R - D*D;
    if(a > 0)
      cout << ceil(L/sqrt(a)) << endl;
    else
      cout << "impossible" << endl;
  }
  return 0;
}
