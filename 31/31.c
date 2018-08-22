#include<stdio.h>
int main(){
  int s[5] = {0};
  int max = 0;
  int min = 0;
  for(int i = 0; i < 5; i++){
    scanf("%d", &s[i]);
  }
  for(int j = 1; j < 5; j++){
    max = s[0];
    if(s[j] > max)
      max = s[j];
  }
  for(int k = 1; k < 5; k++){
    min = s[0];
    if(s[k] < min)
      min = s[k];
  }
  printf("%d ", min);
  printf("%d", max);
  return 0;
}
