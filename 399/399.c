#include <stdio.h>
int main(){
  int n, b;
  while(scanf("%d%d", &n, &b) != EOF ){
    printf("%d\n", n/b);//运行时间问题，如果用for循环，运行时间通过不了！
  }
  return 0;
}
    
