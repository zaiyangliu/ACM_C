#include <stdio.h>
int main(){
  int n, k;
  while(~scanf("%d%d", &n, &k) ){   //equal while(scanf("%d%d", &n, &k) != EOF)
    if(n <= k)
      printf("%d\n", 2);
    else if( 2*n % k == 0)
      printf("%d\n", 2*n/k);
    else
      printf("%d\n", 2*n/k +1);
  }
  return 0;
}
