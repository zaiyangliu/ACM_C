 
#include<stdio.h>
#include<string.h>
int main()
{
	int t,len,i,j;char x[105];
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		gets(x);int kase=1;//标记变量
		len=strlen(x);
		while(len%2==0)//循环限定
		{
			for(i=0;i<len/2;++i)//内部判断回文
			{
				if(x[i]!=x[len-i-1])
				{
					kase=0;//不满足直接跳出
					break;
				}
			}
			if(kase)
			{
				len/=2;//下次处理一半的情况
				continue;
			}
			break;//不满足，继续跳出
		}
		printf("%d\n",len);//输出
	}
	return 0;
}
        
