#include<stdio.h>
int main(){
  int num;
  scanf("%d", &num);
  while(num--){
    int n;
    scanf("%d", &n);
    int sum = 1;
    int ai = 1;
    for(int i = 2; i <= n; i++){
      ai = ai + i;
      sum += ai;
    }
    printf("%d\n", sum);
  }
  return 0;
}
