#include <stdio.h>
int fact(int n){
  if(n%2)
    return n == 1 ? 1 : n*fact(n-2);
  return fact(n-1);
}

int main(){
  int num;
  int m;
  scanf("%d", &num);
  while(num--){
    scanf("%d", &m);
    int sum = 0;
    for(int i = 1; i <= m; i++){
      sum += fact(i);
    }
    printf("%d\n", sum);
  }
  return 0;
}
