 
#include<stdio.h>
int answer(int n, int m){
  if(n == 0)
    return 0;
  return answer(n/m, m) + n/m;
}

int main(){
  int num;
  scanf("%d", &num);
  while(num--){
    int n, m;
    scanf("%d%d", &n, &m);
    printf("%d\n", answer(n, m));
  }
  return 0;
}

        
