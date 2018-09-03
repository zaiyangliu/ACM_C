#include <stdio.h>
int main(){
  int n;
  int a[36] = {0};
  while(scanf("%d", &n) != EOF){
    if(n == 0){
      printf("%d\n", 0);
      //continue; 可有可无
    }
    int i = 0;
    while(n != 0){
      a[i++] = n % 2;
      n /= 2;
    }
    while(i--){
      printf("%d", a[i]);
    }
    printf("\n");
  }
  return 0;
}
