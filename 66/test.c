#include<stdio.h>
int main(){
  int num;
  scanf("%d", &num);
  while(num--){
    int k;
    scanf("%d", &k);
    for(int y = k + 1; y <= 2*k; y++){
      float x = k*y*1.0/(y-k);
      int temp = (int) x;
      if( temp == x && x >= y){
	printf("1/%d=1/%d+1/%d\n", k, (int)x, y);
      }
    }
  }
  return 0;
}
