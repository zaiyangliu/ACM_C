#include<stdio.h>
#include<string.h>
int main(){
  int num;
  int len;
  char x[105];
  scanf("%d",&num);
  getchar();
  while(num--){
    gets(x);
    int flag = 1;
    len = strlen(x);
    while(len % 2 == 0){
      for(int i = 0; i < len/2; ++i){
	if(x[i] != x[len-1-i]){
	  flag = 0;
	  break;
	}
      }
      if(flag){
	len /= 2;
	continue;
      }
      break;
    }
    printf("%d\n", len);
  }
  return 0;
}
