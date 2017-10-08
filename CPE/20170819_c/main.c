#include<stdio.h>

/*int main(void)
{
    int n;
    int p;
    int t;
    int a[100];
    int day[1000];
    int i,j;

    scanf("%d",&t);
    while(t--)
    {
        int count=0;
        scanf("%d",&n);
        scanf("%d",&p);
        for(i=0;i<1000;i++)
        {
            day[i]=0;
        }
        for(i=0;i<p;i++)
        {
            scanf("%d",&a[i]);
            for(j=a[i];j<=n;j+=a[i])
            {
                day[j]=1;
            }
        }
        for(j=1;j<=n;j++)
        {
            if(j%7==6 || j%7==0)
            {
                continue;
            }
            if(day[j]==1)
            {
                count++;
            }
        }
        printf("%d",count);
    }
}*/

/*int toint(char s[31])
{
    int i;
    int ans=0;
    for(i=0; i<30; i++)
    {
        if(s[i]=='\0')
        {
            break;
        }
        ans*=2;
        if(s[i]=='1')
        {
            ans+=1;
        }
    }
    return ans;
}

int gcd(int p,int q)
{
    if(q>p)
    {
        return gcd(q,p);
    }
    if(q==0)
    {
        return p;
    }
    return gcd(q,p%q);
}


int main(void)
{
    int n;
    int a[100];
    scanf("%d",&n);
    char s1[31],s2[31];
    while(n--)
    {
        scanf("%c",&s1[31]);
        scanf("%c",&s2[31]);
        int x= toint(s1);
        int y= toint(s2);

        if(gcd(x,y)>1)
        {
            printf("all you need is love \n");
            //printf("%d",toint(s1));
        }
        else
        {
            printf("love is not all you need \n");
            //printf("%d",toint(s2));
        }
    }
    return 0;


}*/

int main (void)//(mod 10)->(mod 2)
{
    char s[30];
    int i;
    int n;
    while()
    {
        int ans=0;
        scanf("%s",&s);
        for(i=0; i<30; i++)
        {
            if(s[i]=='\0')
            {
                break;
            }
            ans*=2;
            if(s[i]=='1')
            {
                ans+=1;
            }
        }
         printf("%d",ans);
    }


}

/*int main(void)
{
    int m,n;
    int tmp;
    while(scanf("%d %d",&n,&m))
    {
        if(n<2 || m<2)
        {
            printf("boring \n");
            continue;
        }
        tmp=n;
        while(n%m==0 && n>1)
        {
            n/=m;
        }
        if(n!=1)
        {
            printf("boring");
        }
        else
        {
            n=tmp;
            while(n%m==0 && n>1)
            {
                printf("%d ",n);
                n/=m;
            }
            printf("1");
        }

    }
}
*/

/*int prime(int a)
{
    int i;
    int count=0;
    for(i=0;i<n/2;i++)
    {
        if(a%i==0)
        {
            return 0;
        }
        else
        {
            count++;
        }
    }
    if(count==n/2)
    {
        return 1;
    }
}

int main(void)
{
    int n;
    while(scanf("%d",&n))
    {
        if()
    }
}*/


/*int main(void)
{
    int n;
    int rn;
    while(scanf("%d",&n))
    {
        for(rn=0;n;n/=10)
        {
            rn =rn*10 + n%10;
        }
        printf("¬Û¤Ï%d",rn);
    }

}
*/







