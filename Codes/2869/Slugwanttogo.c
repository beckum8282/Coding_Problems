#include <stdio.h>

int main(void) {
    int v, a, b;
    int i = 0;

    scanf("%d %d %d",&a,&b,&v);
    int num = (v-a) % (a-b) + a;
    int jjal = (v-a) / (a-b);
    while(1)
    {
        i++;
        num= num-a;
        if(num <= 0)
        {
            printf("%d",jjal+i);
            return 0;
        }
        else
        {
            num= num + b;
        }
        
    }
    
}