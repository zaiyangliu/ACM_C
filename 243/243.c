#include<stdio.h>
int main(){
  int a[109] = {0};
  int n;
  int min;
  int temp;
  while(scanf("%d", &n) != EOF && n){
    for(int i = 0; i < n; i++)
      scanf("%d", &a[i]);
    min = a[0];
    int q = 0;
    for( int j = 1; j < n; j++){
      if(min > a[j]){
	min = a[j];
	q = j;
      }
    }
    temp = a[0];
    a[0] = min;
    a[q] = temp;
    for( int i = 0; i < n; i++){
      printf("%d ", a[i]);
    }
    printf("\n");
  }
  return 0;
}
      
