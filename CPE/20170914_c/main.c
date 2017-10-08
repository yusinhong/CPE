#include<stdio.h>
int main(void)
{
    int n;
    int tmp=0;
    scanf("%d",&n);
    tmp+=n;
    while(n>=3)
    {
        tmp+=n/3;
        n=(n/3)+(n%3);
    }
    if(n==2)
    {
        tmp++;
        printf("%d",tmp);
    }
    else
    {
        printf("%d",tmp);
    }


}
