#include<stdio.h>
int main(){
  int a, b, c;
  int n;
  scanf("%d%d%d", &a, &b, &c);
  for(n = 10; n <= 100; n++){
    if(n%3 == a && n%5 == b && n%7 == c){
      printf("%d\n", n);
      break;
    }
    else{
      if(n == 101)
      printf("%d","No answer");
    }
  }
}
    
    
