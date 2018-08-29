#include<stdio.h>
int main(){
  int num;
  int a[10] = {0};
  scanf("%d", &num);
  while(num--){
    int count = 0;
    for( int i = 0; i < 10; i++)
      scanf("%d ", &a[i]);
    int height;
    scanf("%d", &height);
    for( int j = 0; j < 10; j++){
      if( (height + 30) >= a[j])
	  count++;
    }
    printf("%d\n", count);
  }
  return 0;
}
	  
