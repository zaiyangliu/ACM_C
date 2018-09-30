#include <stdio.h>
void reverse(int s[], int from, int to){
  for(int i = from, j = to; i < j; ++i, --j){
    int t = s[i];
    s[i] = s[j];
    s[j] = t;
  }
}

void shiftRight(int s[], int n, int k){
  if(k %= n){
    reverse(s, 0, n - k - 1);
    reverse(s, n - k, n - 1);
    reverse(s, 0, n - 1);
  }
}

int main(){
  int s[5] = {1, 3, 4, 5, 6};
  shiftRight(s, 5, 2);
  for(int i = 0; i < 5; i++){
    printf(" %d", s[i]);
  }
  return 0;
}
  
    
