#include<stdio.h>
int main(void)
{
    int n,i;
    int a[100];
    int tmp=0,tmp2=0,tmp3=0;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%d",&a[i]);
        }

        for(i=1; i<=n; i++)
        {
            tmp=a[n/2];
            tmp2=a[n/2 +1];
            tmp3=a[n/2+1]-a[n/2]+1;
        }
        if(n%2==1)
        {
            printf("%d ",tmp2);
            printf("1 ");
            printf("1 ");
        }
        else
        {
            printf("%d ",tmp);
            printf("2 ");
            printf("%d ",tmp3);
        }

    }

}
