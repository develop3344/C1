//数组
#include <stdio.h>

int main(void)
{
    int a[3], i;

    printf("Enter array a:\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 3; i++)
    {
        printf("%2d", a[i]);
    }
    return 0;
}
