#include <stdio.h>
int main(){
  int i, n, k, num;
  while(scanf("%d%d", &n, &k) && (n != 0 || k != 0) ){
    for(i = 1; i < n; i++){    //其实比较到n/2就行！
	num = i*(n - i);
	if(num == k){
	  printf("YES\n");
	  break;
	}
      }
      if(i == n){
	printf("NO\n");
      }
  }
  return 0;
}
