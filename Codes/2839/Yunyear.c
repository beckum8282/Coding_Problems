#include <stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n); // n = 2000

    if(n%400==0) 
    {
        printf("1");
    }
    else if(n%4==0 && n%100!=0)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
    
}