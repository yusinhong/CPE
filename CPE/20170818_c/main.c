#include<stdio.h>
/*int main(void)
{
    int n,num;
    int b1=0,b2=0;
    int v;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&num);
        b1=0;
        b2=0;
        for(v=num;v;v/=2)
        {
            b1+=v%2;
        }
        for(;num;num/=10)
        {
            for(v=num%10;v;v/=2)
            {
                b2+=v%2;
            }
        }
        printf("%d %d",b1,b2);
    }
}
*/


/*int main(void)
{
    int n;
    int b=0;
    while(n!=0)
    {
        scanf("%d",&n);
        printf("the parity of ");
        for(n;;n/2)
        {
            b+=n%2;
            printf("%d",n%2);
            if(n/2 ==0)
            {
                break;
            }
        }
        printf(" is %d (mod 2).",b);
    }
}
*/

int main(void)
{

}



