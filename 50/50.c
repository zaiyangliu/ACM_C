#include<stdio.h>
int main(){
  int num;
  scanf("%d", &num);
  while(num--){
    int a1, a2, a3, a4, a5, a6, a7, a8, a9 ,a10;
    int h = 30;
    int height;
    int count = 0;
    scanf("%d %d %d %d %d %d %d %d %d %d", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10);
    scanf("%d", &height);
    if( (height + h) >= a1)
      count++;
    if( (height + h) >= a2)
      count++;
    if( (height + h) >= a3)
      count++;
    if( (height + h) >= a4)
      count++;
    if( (height + h) >= a5)
      count++;
    if( (height + h) >= a6)
      count++;
    if( (height + h) >= a7)
      count++;
    if( (height + h) >= a8)
      count++;
    if( (height + h) >= a9)
      count++;
    if( (height + h) >= a10)
      count++;
    printf("%d\n", count);
  }
  return 0;
}
