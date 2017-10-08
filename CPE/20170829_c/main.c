#include<stdio.h>
int main(void)
{
    int m,n;
    char a[100][100];
    int i,j;
    while(scanf("%d %d",&m,&n))
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%c",&a[i][j]);
                if(a[i][j]=='.')
                {
                    a[i][j]=0;
                }
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i][j]=='*')
                {
                    //printf("*");
                    //if(a[i][j]=='*')
                    //{
                    //    continue;
                    //}
                    a[i+1][j]++;
                    a[i+1][j+1]++;
                    a[i+1][j-1]++;
                    a[i][j+1]++;
                    a[i][j-1]++;
                    a[i][j+1]++;
                    a[i-1][j+1]++;
                    a[i-1][j-1]++;
                }
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%c",a[i][j]);
            }
        }
    }
}
