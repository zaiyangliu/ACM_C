#include<stdio.h>
#include<math.h>
#define PI 3.1415926

int main(){
  double r;
  while(scanf("%lf", &r) != EOF){
    double v;
    v = PI*(4.0/3.0 )*pow(r,3);
    printf("%d\n", (int)(v + 0.5) );
  }
  return 0;
}
