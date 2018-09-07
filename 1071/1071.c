#include <stdio.h>
int main(){
  int a, b, c;
  while(~scanf("%d%d", &a, &b)){
    c = ( (a>>31)&1 ) + ( (b>>31)&1) ; //逻辑右移，按照符号位补齐，比如负数右移那就补1，正好右移补0
    if( a == 0 || b == 0)
      printf("Signs can't be sure\n");
    else
      printf("Signs are %s\n", c&1?"opposite":"not opposot"); //同号相加后位零，&1后为零。
  }
  return 0;
}
  
