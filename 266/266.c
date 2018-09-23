#include <stdio.h>
#include <string.h>
int main(){
  int n, i, len;
  char a[41];
  scanf("%d", &n);
  getchar();
  while(n--){
    gets(a);
    len = strlen(a);
    for(i = len - 1; i >= 0; i--){
      if(a[i] > '9' && a[i] != ' ')
	printf("%c", a[i]);
    }
    printf("\n");
  }
  return 0;
}
  
