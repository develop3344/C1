#include <stdio.h>//

int isPrime(int x)

{
    int i;
    for (i = 2; i * i <= x; i++)
    {
        if((x % 4 == 0 && x%100 !=0) || (x%400 == 0))
        {
            return 1;
        }
    }
    return 0;
}

int main(void)
{
    int i, flag,count=0;
    for (i = 2000; i <=2050; i++)
    {
        flag = isPrime(i);
        if (flag == 1)
        {
            printf("%5d", i);
            count++;
        }
    }
    printf("count is %d",count);
    return 0;
}
