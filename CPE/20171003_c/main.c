/*#include<stdio.h>
int main(void)
{
    int a[100];
    a[0]=0;
    a[1]=1;
    int i;
    int n;
    for(i=2;i<100;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    scanf("%d",&n);
    printf("the fabonacci number for %d is %d",n,a[n]);
}
*/

/*#include<stdio.h>
int main(void)
{
    int i;
    int a[100];
    a[1]=1;
    int n;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        a[i]=a[i-1]*i;
    }
    int result;
    result=a[n];
    int sum=0;
    while(1)
    {
        sum+=result%10;
        result=result/10;
        if(result<10)
        {
            sum+=result;
            break;
        }
    }
    printf("%d",sum);
}
*/

#include<stdio.h>
int main(void)
{
    int i;
    int j;
    int a[5][5];
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=4; j++)
        {
            if(i%2==1)
            {
                a[i][j]=-1*i*j;
            }
            else
            {
                a[i][j]=i*j;
            }
        }
    }
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=4; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
