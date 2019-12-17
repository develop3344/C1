//二维数组
#include<stdio.h>
#define N 2
#define M 3

int main (void)
{
    int a[N][M],i,j;
    printf("Enter an array:\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
           printf("%5d",a[i][j]);
        }
        printf("\n");//换行 两行三列
    }
}


//二维数组
#include<stdio.h>
#define N 2
#define M 3

int main (void)
{
    int a[N][M],i,j;
    printf("Enter an array:\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)          //M，N互换
        {
           printf("%5d",a[j][i]);      //i,j互换   转置
        }
        printf("\n");//换行 两行三列
    }
}
