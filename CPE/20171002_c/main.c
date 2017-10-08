#include<stdio.h>
int main(void)
{
    int n;
    int paragraph;
    scanf("%d",&n);
    scanf("%d",&paragraph);
    char *chararr=malloc(n*sizeof(char));
    int *moneyarr=malloc(n*sizeof(int));
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%s",&chararr[i]);
        scanf("%d",&moneyarr[i]);
    }
    char str[1000]={};
    int sum=0;
    int j;
    gets(str);
    for(j=0;j<100;j++)
    {
        for(i=0;i<n;i++)
        {
            if(str[j]==chararr[i])
            {
                sum+=moneyarr[i];
            }
        }
    }
    printf("%d",sum);
}
