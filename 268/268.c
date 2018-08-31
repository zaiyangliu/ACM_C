#include<stdio.h>
#include<string.h>
int main(){
  int num;
  scanf("%d", &num);
  char str[1024];
  while(num--){
    scanf("%s", str);
    int len = strlen(str);
    int a[len];
    int b = 0;
    int w = 0;
    int r = 0;
    for(int i=0; i < len; i++){
      if(str[i] == 'R')
	r++;
      if(str[i] == 'W')
	w++;
      if(str[i] == 'B')
	b++;
    }
    while(r--)
      printf("R");
    while(w--)
      printf("W");
    while(b--)
      printf("B");
    printf("\n");
  }
  return 0;
}
