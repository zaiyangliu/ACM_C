#include <stdio.h>
int main(){
  int n;
  scanf("%d", &n);
  while(n--){
    int m;
    int sum = 1;
    scanf("%d", &m);
    while(m--){
      sum = (sum + 1) * 2;
    }
    printf("%d\n", sum);
  }
  return 0;
}
      
