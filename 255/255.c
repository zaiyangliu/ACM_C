#include<stdio.h>
#define SWAP(x, y, temp) ((temp) = (x), (x) = (y), (y) = (temp))

int main(){
  int T, i, j,n,temp;
  scanf("%d", &T);
  while(T--){
    int k = 0;
    int a[1002] = {0};
    scanf("%d", &n);
    for(i = 0; i < n; i++){
      scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++){
      if(a[i] != 0){
	for(j = i+1; j < n; j++){
	  if(a[i] == a[j])
	    a[j] = 0;
	}
	a[k++] = a[i];
      }
    }
    for(i = 0; i < k-1; i++){
      for(j = 0; j< k-1-i; j++){
	if(a[j] > a[j+1])
	  SWAP(a[j], a[j+1], temp);
      }
    }
  
    printf("%d\n", k);
    for(i = 0; i < k; i++){
      printf("%d ", a[i]);
    }
  }
  return 0;
}
  
