#include<stdio.h>
#include<math.h>
int isprime(int n){
  int i;
  if(n == 1) return 0;
  else if(n == 2) return 1;
  else{
    int k = sqrt(n);
    for(i = 2; i <= k; i++){
      if(n%i == 0) break;
      else{
        if(i > k) return 1;
      }
    }
  }
}

int main(){
  int total;
  int s[1024] = {0};
  scanf("%d",&total);
  while(total--){
    int num;
    int sum = 0;
    scanf("%d",&num);
    for(int j = 0; j < num; j++){
      scanf("%d", &s[j]);
    }
    for(int k = 0; k < num; k++){
      if(isprime(s[k])){
        sum += s[k];
      }
    }
    printf("%d\n", sum);
  }
  return 0;
}
