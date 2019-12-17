// 交换排序 从大到小
#include <stdio.h>
#define LEN 5

int main(void)
{
    int a[LEN], i;
    printf("Enter an array:\n");
    for (i = 0; i < LEN; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a, LEN); //注意
    for (i = 0; i < LEN; i++)
    {
        printf("%5d", a[i]);
    }

    return 0;
}

void sort(int x[], int n) //为什么为 void
{
    int i, j, tmp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (x[j] > x[i])
            {
                tmp = x[j];     //tmp 中间变量
                x[j] = x[i];
                x[i] = tmp;
            }
        }
    }
}
