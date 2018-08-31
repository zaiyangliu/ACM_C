#include <stdio.h>
int main()
{int i,j,n,sum=0,x[1001]={0};
scanf("%d",&n);
for (i=1;i<=n;i++)
{scanf("%d",&j);
if (x[j]==0) sum++;
x[j]=1;
}
printf("%d\n",sum);
for (i=1;i<=1000;i++)
if (x[i]==1) printf("%d ",i);
return 0;
}        //优秀代码，直接膜拜啊！
