//求最大值
#include <stdio.h>
#define LEN 45
int main(void)
{
    int a[LEN]={0}, i，max;   

    printf("Enter array a:\n");
    for (i = 0; i <LEN; i++)
    {
        scanf("%d", &a[i]);
    }
    
    max= a[0];    //max=0;

    for(i=1; i<LEN;i++)
    {
        if(a[i]>a[max])
        {
            max=a[i];  //max=i;
        }
    }
    printf("Max is %d",a[max]);
    return 0;

   
}
