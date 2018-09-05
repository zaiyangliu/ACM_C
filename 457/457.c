#include <stdio.h>
#include <string.h>
int main(){
  int m;
  char a[102];
  scanf("%d", &m);
  getchar();
  while(m--){
    gets(a);
    int len;
    len = strlen(a);
    for(int i = 0; i < len; i++){
      if(a[i] >= 'A' && a[i] <= 'Z'){
	a[i] += 'a' - 'A';
      }
      else if(a[i] >= 'a' && a[i] <= 'z'){  //很崩溃，为啥用if就不行，比如输入As，输出AS，逻辑上没道理啊，谁能解释啊~！
	a[i] -= 'a' - 'A';
      }
    }
    puts(a);
  }
  return 0;
}
