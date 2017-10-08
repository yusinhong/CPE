#include<stdio.h>
/*int main(void)
{
    int n;
    while(n!=0)
    {
        scanf("%d",&n);
        for(n;n;n/=10)
        {
            printf("%d ", n%10);
        }
    }

}
*/

/*int gcd(int a,int b)
{
    if(a<b)
    {
        return gcd(b,a);
    }
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}

int main(void)
{
    int n;
    int i,j;
    while(n!=0)
    {
        scanf("%d",&n);
        int sum=0;
        for(i=1;i<=n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                sum+= gcd(i,j);
            }
        }
        printf("%d \n",sum);
    }
}
*/
