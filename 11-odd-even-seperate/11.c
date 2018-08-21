#include<stdio.h>
int main(){
  int i;
  scanf("%d", &i);
  while(i--){
    int n, i;
    scanf("%d", &n);
    for(i = 1;i <= n; i++){
      if(i%2 == 1){
	printf("%d ", i);  //注意学习%d后边空格的情况
      }
    }
    printf("\n");
    puts(" "); //输出一行空行
    
    for(i = 2; i <= n; i++){
       if(i%2 == 0){
	  printf("%d ", i);
	}
     }
    printf("\n");
    puts(" ");
  }
  return 0;
}
