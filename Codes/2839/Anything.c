#include <stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n); // n을 받아온다
    // n = 5
    int i = 1;

    for(i = 1; i<=n;i++) { 
        for(int j=0;j<i;j++) { 
            printf("*"); 
        }
        printf("\n"); 
    }
}