#include<stdio.h>
int main(){
  int x, y;
  while(scanf("%d%d", &x, &y) != EOF){
    long long sumx = 0;  //数较大，要用long long型
    long long sumy = 0;
    for(int i = 1; i <= x; i++)
      sumx += i;   //一行的矩形有x个，二行的矩形有x-1个，。。。。。到x行有一个
    for(int j = 1; j <= y; j++)
      sumy += j;
    printf("%lld\n", sumx*sumy);  //因为是分布所以用乘法原理，直接套用公式更快，x*(x+1)*y*(y+1)/4
  }
  return 0;
}
