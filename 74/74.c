#include<stdio.h>
int answer(int m, int n){
  int num = 0;
  int x = m%10 + n%10;
  int y = m/10%10 + n/10%10 ;
  int z = m/100 + n/100;
  if( x >= 10){
    num++;
    if( y + x - 9 >= 10 ){
      num++;
      if( z + y + x - 18 >= 10)
	num++;
    }
  }
  else if( y >= 10){
    num++;
    if( z + y - 9 >= 10)
      num++;
  }
  else if( z >= 10)
    num++;
  return num;

}


int main(){
  int m, n;
  scanf("%d%d", &m, &n);
  while(m !=0 && n != 0){
    printf("%d\n", answer(m,n));
    scanf("%d%d", &m ,&n);
  }
  return 0;
}
      
  
