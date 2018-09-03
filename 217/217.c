#include <stdio.h>
int main(){
  int T;
  scanf("%d", &T);
  char x;
  int y;
  getchar(); //注意要把\n读走
  while(T--){
    scanf("%c%d", &x, &y);
    getchar();    //注意要把\n读走
    if(x >= 'A' && x <= 'Z'){
      printf("%d\n", x - 'A' + 1 + y);
    }
    if(x >= 'a' && x <= 'z'){
      printf("%d\n", -(x - 'a' + 1) + y);
    }
  }
  return 0;
}
