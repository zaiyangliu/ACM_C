#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		int w=0,b=0;
		char c;
		while((c=getchar())!='\n')
			c=='R'?printf("R"):(c=='W'?w++:b++);
		while(w--)
			putchar('W');
		while(b--)
			putchar('B');
		printf("\n");
	}
}        
//优秀代码，学习了！
