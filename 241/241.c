#include<stdio.h>
#include<string.h>
int main(){
  int num, max;
  char a[1011];
  scanf("%d", &num);
  getchar();     //很关键，把\n读入。
  while(num--){
    int s[26] = {0};
    int q;
    gets(a);
    for( int i = strlen(a) - 1; i >= 0; i--){
      s[a[i] - 97]++;
    }
    max = 0;
    for(int i = 0; i < 26; i++){
      if(max < s[i]){
	max = s[i];
	q = i;
      }
    }
    printf("%c\n", q + 97);
  }
  return 0;
}
    
