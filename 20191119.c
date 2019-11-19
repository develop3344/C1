/*输入一个正整数n>0，求各位数字之和  如 1357的个位数字之和 1+3+5+7=16 */
# include<stdio.h>
int main (void)
{
    int n,sum=0,term;
    printf("Enter n:\n");
    scanf("%d",&n);
    
    while(n>0)
    {
        term= n%10;
        sum += term;
        n= n/10;
    }

    printf("Sum is %d\n",sum);
    return 0;
}
