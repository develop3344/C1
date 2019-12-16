//用 函数找最大值
#include <stdio.h>
#define LEN 5

int main(void)
{
    int a[LEN], max, i; //数组中括号
    printf("Enter an array:\n");
    for (i = 0; i < LEN; i++)
    {
        scanf("%d", &a[i]);
    }
    max= findMax(a,LEN);

    printf("Max is %d\n", max);
    return 0;
}

int findMax(int x[],int n)  //数组长度
{
    int m,i;
    m=x[0];
    for(i=1;i<n;i++)
    {
        if(x[i]>m)
        {
            m=x[i];
        }
    }
    return m;
}


