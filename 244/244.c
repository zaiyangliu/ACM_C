#include<stdio.h>
int main(){
  int num;
  scanf("%d", &num);
  while(num--){
    int x, y;
    char c;
    scanf("%x%c%x", &x, &c, &y);
    if(c == '+'){
      printf("%o\n", x + y);
    }
    else
      printf("%o\n", x - y);
  }
  return 0;
}

