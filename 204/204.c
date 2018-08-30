#include<stdio.h>
#include<math.h>
int gcd( int m, int n){
  if( m == 0 )
    return n;
  return gcd(n%m, m);
}
int main(){
  int n;
  char c;
  int numU = 0;
  int numD = 0;
  scanf("%d", &n);
  getchar();
  for(int i = 0; i < n; i++){
    c = getchar();
    if( c == 'S'){
      printf("%s\n", "Bingo");
      return 0;
    }
    if( c == 'U')
      ++numU;
    else
      ++numD;
  }

  int g = gcd( numU, (numU + numD));
  if( fabs( (double)numU/(numU + numD)  - 0.5 ) > 0.003 )  
    printf("%s\n", "Faile");
  else
    printf("%d/%d", numU/g, (numU + numD)/g);
  
  return 0;
}
  
