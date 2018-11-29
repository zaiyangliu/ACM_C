#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main(){
  int N;
  int M, X, Y, Z;
  cin >> N;
  while(N--){
    double sum = 0, t = 0;
    cin >> M >> X >> Y >> Z;
    t = 1.0 * X * M /(Y - X);
    sum = t * Z;
    //printf("%.2f\n", sum);
    cout << setiosflags(ios::fixed) << setprecision(2) << sum << endl;
  }
  return 0;
}
