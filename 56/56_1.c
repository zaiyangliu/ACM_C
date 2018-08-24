#include<stdio.h>
int main(){
  int num;
  scanf("%d", &num);
  while(num--){
    int n, m;
    int j = 0;
    scanf("%d%d", &n, &m);
    for( int i = 1; i <= n; i++){
      for( int k = i; !(k%m); j++){
	k = k / m;
      }
    }
    printf("%d\n", j);
  }
  return 0;
}
