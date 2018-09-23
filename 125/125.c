#include <stdio.h>
#include <string.h>

int main(){
  int T, n;
  char str[10];
  int sum;
  int speed;
  int time;
  scanf("%d", &T);
  while(T--){
    scanf("%d", &n);
    sum = 0;
    speed = 1;
    while(n--){
      scanf("%s", str);
      if(strcmp(str, "IN") == 0)
	speed *= 20;
      else if(strcmp(str, "STAY") == 0){
	scanf("%d", &time);
	sum += (time*60)/speed;
      }
      else if(strcmp(str, "OUT") == 0){
	speed /= 20;
      }
    }
    printf("%d\n", sum);
  }
  return 0;
}
  
