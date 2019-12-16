//求最大值  假设第一个数为最大值 再循环比较 即可
//数组用 中括号
#include <stdio.h>
#define LEN 5

int main(void)
{
    int a[LEN], max, i;
    for (i = 0; i < LEN; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (i = 1; i < LEN; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    printf("Max is %d\n", max);
    return 0;
}
