#include<stdio.h>
int main(){
  int num;
  scanf("%d", &num);
  while(num--){
    int n, m;
    int flag = 0;
    scanf("%d%d", &n, &m);
    for(int i = 0; i < 100; i++){
      for( int j = 0; j < 100; j++){
	if( (i + j) == n && (( i * 2 + j * 4) == m) ){
	  printf("%d %d\n", i, j);
	  flag = 1;
	  break;
	}
      }
    }
    if(flag == 0)
      printf("%s\n", "No answer");
  }
  return 0;
}
