#include <stdio.h>
int main()
{
    int i,n;
	scanf("%d", &n);
    for(i=2;i<=n;i++)
    {
        if(n % i == 0) // 
        {
            printf("%d\n",i);
            n = n / i;
            i = 1;
        }
    }
}



