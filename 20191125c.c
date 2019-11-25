/*判断n是否为素数*/
#include <stdio.h>
int main(void)
{
    int i,n;
    printf("Enter n:\n");
    scanf("%d",&n);

    for(i=2;i<=n-1;i++)        /*  i<=sqrt(n) */
    {
        if(n%i==0)
        {
            break;
        }
    }

    if( i==n )                  /* i>sqrt(n) */
    {
        printf("Yes!\n");
    }
    else
    {
        printf("No!\n");
    }
    
    return 0;
}