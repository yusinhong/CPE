#include<stdio.h>
/*int main(void)
{
    int i=0,j=0,k=0;
    int group=0;//幾組資料
    int n=0;//遊戲人數
    int x=0;//第幾個人
    double p=0,pi=0;//機率
    double sum=1,sum2=1;
    scanf("%d",&group);
    for(i=0; i<group; i++)
    {
        scanf("%d %lf %d",&n,&p,&x);
        for(k=0; k<x-1; k++)
        {
            if(x==1)
            {
                sum2=1;
                break;
            }
            else
            {
                sum2*=(1-p);
            }
        }
        for(j=0; j<n; j++)
        {
            sum*=(1-p);
        }
        pi=p*sum2/(1-sum);
        printf("%.4lf\n",pi);
    }



}
*/
/*int main(void)
{
    int people=0,day=0;
    int i=0,sum=0;
    while(scanf("%d %d",&people,&day))
    {
        while(1)//for(i=0;;i++)
        {
            sum=(2*people+i)*(i+1)/2;
            if(sum>=day)
            {
                printf("%d",people+i);
                break;
            }
            i++;
        }
    }
    return 0;
}*/
/*int pow(int a,int b);

int main(void)
{
    int x;
    int a[100000];
    int len=0,i=0,j=0;
    int count=0;
    int sum=0;
    while(1)
    {
        if(scanf("%d",&x))
        {
            //printf("%d\n",input);
            for(len=0;;)
            {
                scanf("%d",&a[len]);
                count++;
                len++;
                if(getchar()=='\n')
                {
                    break;
                }
            }

            for(i=0; i<count-1; i++)
            {
                sum+=a[i]*(count-1-i)*pow(x,count-i-2);
            }

            printf("%d",sum);
        }




    }
    system("pause");
    return 0;
}

int pow(int a,int b)
{
    int result=1;
    int i;
    if(b=0)
    {
        return result;
    }
    else
    {
        for(i=0; i<b; i++)
        {
            result*=a;
        }
        return result;
    }

}*/


int main(void)
{
    int a,b;
    int n;
    int sum,sum2;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        if(a%2==0)
        {
            a++;
        }
        if(b%2==0)
        {
            b--;
        }
        sum=(b-a)/2+1;
        sum2=(a+b)*sum/2;
        printf("%d",sum2);
    }

}







