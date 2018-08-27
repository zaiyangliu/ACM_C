#include<stdio.h>
int main(){
  int num;
  scanf("%d", &num);
  while(num--){
    int m;
    getchar();   //读掉\n
    scanf("%*c%d", &m);  //%*c 读入一个字符，但是不存储
    printf("%d\n", m);
  }
  return 0;
}
