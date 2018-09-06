 
#include<stdio.h>
int main()
{
	long long a,b,c,d,e;
	scanf("%lld",&a);
	while(a--)
	{
		scanf("%lld",&b);
		printf("%lld\n",(b-1)*1000+471);//关键是同余定理要会！
	}
	return 0;
}
        
