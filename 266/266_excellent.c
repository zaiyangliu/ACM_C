 
#include <stdio.h>
void revers()
{
    char c;
    if((c = getchar()) != '\n')
        revers();
    if(c != '\n'&&c>='a'&&c<='z')
        putchar(c);
}

int main()
{
	int a;
	scanf("%d\n",&a);
	while(a--)
	{
		revers();
		printf("\n");
	}
	return 0;
}
        
