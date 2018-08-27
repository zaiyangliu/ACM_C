#include<stdio.h>
#define YES 1
#define NO 0
int leap_year( int n){
  if(n%4 == 0 && n%100 != 0 || n%400 == 0)
    return YES;
  return NO;
}

int main(){
  int num;
  scanf("%d", &num);
  while(num--){
    int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int sum = 0;
    int year, month, day;
    scanf("%d%d%d", &year, &month, &day);
    if(leap_year(year))
      a[1] = 29;
    for(int i = 0; i < month - 1; i++){
      sum += a[i];
    }
    sum = sum + day;
    printf("%d\n", sum);
  }
  return 0;
}
