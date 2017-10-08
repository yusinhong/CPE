#include<stdio.h>
/*int main(void)
{
    int n;
    int s,d;
    int a,b;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d",&s,&d);
        a=(s+d)/2;
        b=s-a;
        if(a<0 || b<0)
        {
            printf("impossible");
        }
        else{
            printf("%d %d",a,b);
        }
    }
    return 0;
}
*/

/*int main(void)
{
    int group;
    int n;
    int a[100][100];
    int i,j;
    //int count=0,count2=0;
    int x;
    scanf("%d",&group);
    while(group--)
    {
        printf("int put dimension\n");
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                scanf("%d",&a[i][j]);
                if(a[i][j]<0)
                {
                    x=0;
                }
            }
        }
        if(x==1)
        {
            for(i=0; i<n; i++)
            {
                for(j=0; j<n; j++)
                {
                    if(a[i][j]!=a[n+1-i][n+1-j])
                    {
                        x=0;
                        break;
                    }
                }
            }
        }
        if(x==0)
        {
            printf("Non-symmetric\n");
        }
        else
        {
            printf("Symmetric\n");
        }


    }

    return 0;
}*/

/*int main(void)
{
    int a,b;
    int i;
    int array[1000];
    int count=0;
    while(scanf("%d %d",&a,&b))
    {
        if(a==0 && b==0)
        {
            break;
        }
        for(i=1; i<330; i++)
        {
            array[i-1]=i*i;
            if(array[i-1]<b)
            {
                count++;
            }
        }
        for(i=1; i<330; i++)
        {
            if(a==i*i)
            {
                count-1;
            }
        }
        printf("%d",count);
    }


}
*/

/*int main(void)
{
    int n;
    int i,j,k;
    int a[100];
    int b[1000];
    int f;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(k=0; k<1000; k++)
    {
        for(i=0; i<n; i++)
        {
            for(j=1; j<n; j++)
            {
                b[k]=a[i]+a[i+j];
                if(b[k]==b[k+j])
                {
                    f=0;
                }
            }
        }
    }

    if(f==0)
    {
        printf("not B2");
    }
    else
    {
        printf("is B2");
    }
}*/

/*int main(void)
{
    int v,t;
    while(scanf("%d %d",&v,&t))
    {
        printf("%d",2*v*t);
    }
}
*/

/*int main(void)
{
    int a[40]={0,1};
    int n;
    int x;
    int i,k;
    scanf("%d",&n);
    for(i=2;i<40;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }

    while(n--)
    {
        scanf("%d",&x);
        for(k=39;k>=2;k--)
        {
            if(x>=a[k])
            {
                printf("1");
                x-=a[k];
            }
            else{printf("0");}
        }
    }

}
*/







