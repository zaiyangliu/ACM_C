#include <stdio.h>
#include <math.h>
int main(){
  int T;
  scanf("%d", &T);
  while(T--){
    double A, B, C;
    scanf("%lf%lf%lf", &A, &B, &C);
    if(fabs(A + B - C) <= 0.0001)
      printf("Yes\n");
    else
      printf("No\n");
  }
  return 0;
}
