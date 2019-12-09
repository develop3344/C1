#include <stdio.h>
#include <math.h>

int isPrime  (int x) //函数首部后面不能加分号，它和函数体一起构成完整的函数定义

{
    int  i;
    for (i = 2; i <= sqrt(x); i++)
    {
        if (x% i == 0)
        {
            break;
        }
    }
    if (i > sqrt(x))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}    //略有问题

int main (void)
{
    int n,i,flag;
    printf("Enter n:\n");
    scanf("%d", &n);

    flag=isPrime(n);
    if( flag == 1 ){
        printf("Yes\n");
    }else {
        printf("No\n");
    }
    return 0;
}
