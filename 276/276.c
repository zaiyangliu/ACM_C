#include <stdio.h>
int main(){
  int T;
  scanf("%d", &T);
  while(T--){
    char a, b;
    getchar(); // 关键要小心getchar()放在此地方的作用。
    scanf("%c %c", &a, &b);
    if(a == b)
      printf("%c=%c\n", a, b);
    else if(a < b)
      printf("%c>%c\n", a, b);
    else
      printf("%c<%c\n", a, b);
  }
  return 0;
}


