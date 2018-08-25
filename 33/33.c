#include<stdio.h>
#define MAX 100
int main(){
  int a[MAX][MAX] = {0};
  int c = 1;
  int x = 0;
  int n;
  scanf("%d", &n);
  int y = n - 1;
  a[0][n-1] = 1;
  while( c < n*n ){
    while( x + 1 < n && !a[x+1][y])
      a[++x][y] = ++c;                   //向下
    while( y - 1 >= 0 && !a[x][y-1] )
      a[x][--y] = ++c;                  //向左
    while( x - 1 >= 0 && !a[x-1][y] )
      a[--x][y] = ++c;                 //向上
    while( y + 1 < n && !a[x][y+1] )
      a[x][++y] = ++c;                  //向右
  }
      
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      printf("%d  ", a[i][j]);
    }
    printf("\n");
  }
  return 0;
}
  
  
