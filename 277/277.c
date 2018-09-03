#include<stdio.h>
#include<string.h>
int main(){
  int num;
  scanf("%d", &num);
  while(num--){
    char a[1008][6];
    int m;
    scanf("%d", &m);
    getchar();
    for(int i = 0; i < m; i++){
      scanf("%s", a + i);
      if(strcmp(a[i], a[0]) < 0){
	strcpy(a[0], a[i]);
      }
    }
    printf("%s\n", a[0]);
  }
  return 0;
}
