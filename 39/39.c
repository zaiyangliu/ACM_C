#include<stdio.h>
int main(){
  int n = 1;
  while(n){
    scanf("%d", &n);
    if(n == 0)
      return 0;
    int i = n/100;
    int j = n/10%10;
    int k = n%10;
    if ( (i*i*i + j*j*j + k*k*k) == n )
      printf("%s\n", "Yes");
    else
      printf("%s\n", "No");
  }
  return 0;
}
