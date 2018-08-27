#include<stdio.h>
#include<math.h>
int isprime(int n){
  if( n < 2)
    return 0;
  if( n == 2)
    return 1;
  int flag = 1;
  for(int i = 2; i <= sqrt(n); i++){
    if( n % i == 0){
      flag = 0;
      break;
    }
  }
  return flag;
}

int main(){
  int num;
  scanf("%d", &num);
  while(num--){
    int n;
    scanf("%d", &n);
    int j = n ;
    for( int i = n; ; i++){
      if(isprime(i)){
	printf("%d\n", i);
	break;
      }
      --j;
      if(isprime(j) && !isprime(i+1) ){    //确保i和j距离n相当的时候输出大的i
   	printf("%d\n", j);
	break;
      }
    }
  }
  return 0;
     
}
    
