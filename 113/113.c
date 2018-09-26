#include <stdio.h>
#include <string.h>
int main(){
  char s[1000];
  while(gets(s)){
      int size;
      size = strlen(s);
      for(int i = 0; i < size; i++){
	if(s[i] == 'y' && s[i+1] == 'o' && s[i+2] == 'u'){
	  s[i] = 'w';
	  s[i+1] = 'e';
	  s[i+2] = '#';
	}
      }
      for(int i = 0; i < size; i++){
	if(s[i] == '#')
	  continue;
	printf("%c", s[i]);
      }
      printf("\n");
  }
  return 0;
}
