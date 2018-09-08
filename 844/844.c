#include <stdio.h>
int number_r(int n);
int main(){
  int m, n;
  while(scanf("%d%d", &m, &n) != EOF && ( m || n ) ){
      printf("%d\n", number_r(m) + number_r(n));
  }
  return 0;
}

int number_r(int n){
  int sum = 0;
  while(n){
    sum = sum * 10 + n % 10;
    n /= 10;
  }
  return sum;
}
    
    
  
