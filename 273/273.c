#include <stdio.h>
int main(){
  int n;
  char s[202];
  scanf("%d", &n);
  getchar();
  while(n--){
    int m;
    int sum = 0;
    gets(s);
    for(int i = 0; s[i] != '\0'; i++){
      if(s[i] >= 'a' && s[i] <= 'z'){
	sum++;
      }
    }
    sum = sum % 26;
    if(sum == 0)
      printf("%C\n", 'z');
    else
      printf("%c\n", 'a' + sum - 1);
  }
  return 0;
}
