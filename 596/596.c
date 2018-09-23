#include <stdio.h>
int main(){
  int T;
  while(scanf("%d", &T) && T != 0){
    int a, b;
    int sum = 0;
    while(T--){
      scanf("%d%d", &a, &b);
      if((a+b) > sum)
	sum = a + b;
    }
    printf("%d\n", sum);
  }
  return 0;
}
    
    
    
