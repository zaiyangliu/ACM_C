#include <stdio.h>
int max(int a, int b, int c);
int min(int a, int b, int c);
int max_S(int s[], int N);

int main(){
  int N;
  int s[10010];
  while(scanf("%d", &N) != EOF){
    int a, b, c;
    for(int i = 0; i < N/3; i++){
      scanf("%d%d%d", &a, &b, &c);
      if(i&1)                      //judge the odd and even
	s[i] = min(a, b, c);
      else
	s[i] = max(a, b, c);
    }
    printf("%d\n", max_S(s, N) );
  }
  return 0;
}

int max(int a, int b, int c){
  int t;
  t = a>b?a:b;
  return t>c?t:c;
}

int min(int a, int b, int c){
  int t;
  t = a<b?a:b;
  return t<c?t:c;
}

int max_S(int s[], int N){
  int max = s[0];
  for(int i = 1; i < N/3; i++){
    if(max < s[i])
      max = s[i];
  }
  return max;
}
  
  
    
	
	
