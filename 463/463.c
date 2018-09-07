#include <stdio.h>
int main(){
  int N;
  scanf("%d", &N);
  while(N--){
    int M;
    scanf("%d", &M);
    for(int i = 1; i <= M; i++){
      for(int j = i; j <= 9; j++){
	printf("%d*%d=%d ",i, j, i*j);
      }
      printf("\n");
    }
  }
  return 0;
}
