#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int n;
  scanf("%d", &n);
  printf("%d=", n);
  for(int i = 2; i <= sqrt(n); i++){
    if(n % i == 0){
      n /= i;
      printf("%d*", i--);
    }
  }
  printf("%d\n", n);
  return 0;
}
