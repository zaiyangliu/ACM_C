#include <stdio.h>
char str[20];
int Gcd(int m, int n){
  if(m == 0)
    return n;
  else
    return Gcd(n%m, m);
}

int main(){
  int fz, fm, gcd;
  while(scanf("%s", str) != EOF){
    if(str[3] == '-'){
      fz=(str[0]-'0')*(str[6]-'0')-(str[2]-'0')*(str[4]-'0');
    }
    else{
      fz=(str[0]-'0')*(str[6]-'0')+(str[2]-'0')*(str[4]-'0');
    }
    if(fz){
      fm = (str[2] - '0')*(str[6] - '0');
      gcd = Gcd(fz, fm);
      if(gcd < 0)
	gcd = -gcd;
      if(fm/gcd == 1)
	printf("%d\n", fz/gcd);
      else
	printf("%d/%d\n", fz/gcd, fm/gcd);
    }
    else
      puts("0");
  }
  return 0;
}
