#include<stdio.h>
int gcd( int a, int b){
  return b == 0 ? a: gcd( b, a%b);//辗转相除法的递归表达式
}

int lcm( int a, int b){
  return a*b/gcd( a, b);//最小公倍数是两个数相乘除以最大公约数
}

int main(){
  int num;
  scanf("%d", &num);
  while(num--){
    int a, b;
    scanf("%d%d", &a,&b);
    printf("%d %d\n", gcd( a, b), lcm( a, b));
  }
  return 0;
}
