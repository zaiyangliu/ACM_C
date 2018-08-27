#include<stdio.h>
int main(){
  int num;
  scanf("%d", &num);
  while(num--){
    int m;
    getchar();   //读掉\n
    scanf("%*1d%d", &m);  //%*1d 读入一个整数，但是不存储
    printf("%d\n", m);
  }
  return 0;
}



