#include <stdio.h>
int main()
{
    long a,b,c;
    scanf("%ld%ld%ld",&a,&b,&c);
    long num;

    long cb = c-b;
    if(a/cb+1<0)
    {
        printf("-1");
        return 0;
    }
    printf("%ld",a/cb+1);
    return 0;
}