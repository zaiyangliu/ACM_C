#include<stdio.h>
int main(){
  int num;
  scanf("%d", &num);
  while(num--){
    int n;
    int count = 0;
    scanf("%d", &n);
    for(int i = n; ; ){
      if(i%2)
	count++;
      i /= 2;
      if( i == 0)
	break;
    }
    printf("%d\n", count);
  }
  return 0;
}
