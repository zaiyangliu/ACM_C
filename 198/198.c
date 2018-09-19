#include <stdio.h>
int main(){
  int T;
  char s[10] = {'O', 'O', 'T', 'T', 'F', 'F', 'S', 'S', 'E', 'N'};
  scanf("%d", &T);
  while(T--){
    int n;
    scanf("%d", &n);
    while(n){
      int i;
      i = n%10;
      n /= 10;
      printf("%c", s[i]);
    }
    printf("\n");
  }
  return 0;
}
    
