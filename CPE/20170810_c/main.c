#include<stdio.h>

int main(void)
{
    int i;
    int a[100];
    int tmp1=0,tmp2=0,count=0;
    int n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i+1]>a[i])
        {
            tmp1=a[i+1]-a[i];
            if(tmp1>=1 && tmp1<= n-1)
            {
                count+=1;
            }
            else
            {
                continue;
            }
        }
        else//a[i]>a[i+1]
        {
            tmp2=a[i]-a[i+1];
            if(tmp2>=1 && tmp2<= n-1)
            {
                count+=1;
            }
            else
            {
                continue;
            }
        }
    }
//printf("%d",count);
    if(count==n-1)
    {
        printf("Is jolly jumper");
    }
    else
    {
        printf("Not jolly jumper");
    }
}
