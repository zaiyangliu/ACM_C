#include<stdio.h>
int main(){
  int num;
  scanf("%d", &num);
  while(num--){
    int score;
    scanf("%d", &score);
    if( 90 <= score && score <= 100)
      printf("%c\n", 'A');
    else if( 80 <= score && score < 90 )
      printf("%c\n", 'B');
    else if(70 <= score && score < 80)
      printf("%c\n", 'C');
    else if(60 <= score && score < 70)
      printf("%c\n", 'D');
    else if(0 <= score && score < 60)
      printf("%c\n", 'E');
  }
  return 0;
}
