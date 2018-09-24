#include <stdio.h>
int convert(int n){
  int a[5];
  int temp;
  int n1, n2;
  a[0] = n%10;
  a[1] = n/10%10;
  a[2] = n/100%10;
  a[3] = n/1000;
  for(int i = 0; i < 3; i++){    //比较n-1趟
    for(int j = 0; j < 3 - i; j++){  //每趟比较n-i-1次
      if(a[j] > a[j+1]){
	temp = a[j];
	a[j] = a[j+1];
	a[j+1] = temp;
      }
    }
  }
  n1 = a[3]*1000 + a[2]*100 + a[1]*10 + a[0];
  n2 = a[0]*1000 + a[1]*100 + a[2]*10 + a[3];
  return n1 - n2;
}

int main(){
  int n;
  scanf("%d", &n);
  while(n--){
    int num;
    int sum = 1;
    scanf("%d", &num);
    while(convert(num) != num){
      num = convert(num);
      sum++;
    }
    printf("%d\n", sum);
  }
  return 0;
}
