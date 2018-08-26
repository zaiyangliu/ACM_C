#include<stdio.h>
#define ON 1
#define OFF 0
int main(){
  int n, k;
  scanf("%d%d", &n, &k);
  int a[n+1];
  for(int i = 1; i <= n; i ++)
    a[i] = ON;
  for(int j = 2; j<= k; j++){
    for( int i = 2; i <= n; i++){
      if( i % j == 0)
	a[i] = !a[i];
    }
  }
  for( int i = 1; i <= n; i++){
    if( a[i])
      printf("%d ", i);
  }
  return 0;
}
  
