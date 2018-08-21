#include <stdio.h>
int main()
{
    char a,b,c,d;
    int i;
    scanf("%d",&i);
    getchar();//前面的scanf()在读取输入时会在缓冲区中留下一个字符'\n',所以如果不在此加一个getchar()把这个回车符取走的话，gets(）就不会等待从键盘键入字符，而是会直接取走这个“无用的”回车符，从而导致读取有误
    while(i--)
    {
        scanf("%c%c%c",&a,&b,&c);
        getchar();
        if (a>b) {d=a;a=b;b=d;}
        if (a>c) {d=a;a=c;c=d;}
        if (b>c) {d=b;b=c;c=d;}
        printf("%c %c %c\n",a,b,c);
    }
    return 0;
}
