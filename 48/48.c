#include<stdio.h>
void Swap( int *m, int *n){
  int temp;
  temp = *m;
  *m = *n;
  *n = temp;
}
void BubbleSort(int a[], int n){
  int temp;
  for(int i=0; i<n-1; i++){
    for(int j=1; j<n-i; j++){
      if(a[j] < a[j-1]){
	Swap(&a[j], &a[j-1]);  //exchange
      }
    }
  }
}

int main(){
  int n;
  int count = 0;
  scanf("%d", &n);
  int a[n];
  for(int i=0; i<n; i++){
    scanf("%d", &a[i]);
  }
  BubbleSort(a, n);
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      if(a[i] == a[j])
	a[j] = 0;
    }
  }
  for(int i=0; i<n; i++){
    if(a[i] != 0){
      count++;
    }
  }
  printf("%d\n", count);
  for(int i=0; i<n; i++){
    if(a[i] != 0){
      printf("%d ", a[i]);
    }
  }
  printf("\n");
  return 0;
}
