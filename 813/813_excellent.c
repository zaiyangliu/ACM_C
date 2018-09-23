 
#include <cstdio>

int main()
{
    int n,k;
    while(scanf("%d%d",&n,&k)&&(n||k))
    {
        int ok=0;
        for(int i=1;i<=n/2;i++)
        {
            if(i*(n-i)==k)
                ok=1;continue;
        }
        if(ok)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
        
