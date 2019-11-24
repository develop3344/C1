/* 判断n位数（n>=3）是否为 水仙花数 
简单一点 n 取3 */
# include<stdio.h>
int main (void)
{
    int n,sum,term,tmp;
    
    for(n=100;n<=999;n++)
  { 
    sum=0;
    tmp=n;
    while(tmp>0)
    {
        term= tmp%10;    /* 判断n位数（n>=3）是否为 水仙花数 
简单一点 n 取3 */
# include<stdio.h>
int main (void)
{
    int n,sum,term,tmp;
    
    for(n=100;n<=999;n++)
  { 
    sum=0;
    tmp=n;
    while(tmp>0)
    {
        term= tmp%10;   / *分解出末位数 */
        sum += term*term*term;  /* 末位数的三次方 */
        tmp=tmp/10;     / *去掉末位数 */
    }
    if (n == sum)
    {
      printf("n is %d\n",n);
    }
  }
    return 0;
}
        sum += term*term*term;
        tmp=tmp/10;
    }
    if (n == sum)
    {
      printf("n is %d\n",n);
    }
  }
    return 0;
}
