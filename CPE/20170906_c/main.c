/*#include<stdio.h>
char a[100][101];

void plus(int i,int j)
{
    int ii,jj;
    for(ii=i-1; ii<=i+1; i++)
    {
        for(jj=j-1; jj<=j+1; j++)
        {
            if(ii<0||jj<0||ii>=i||jj>=j)
            {
                continue;
            }
            a[ii][jj]++;
        }
    }
}

void in(int m,int n)
{
    int i,j;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%c",&a[i][j]);
        }
    }
}

void change(int m,int n)
{
    int i,j;
    for(i=0; i<m; i++)
        {
            for(j=0; j<n-1; j++)
            {
                if(a[i][j]=='.')
                {
                    a[i][j]=0;
                }
            }
        }
}
int main(void)
{
    int m,n;
    int i,j;
    while(scanf("%d %d",&m,&n))
    {
        if(m==0 && n==0)
        {
            break;
        }
        n++;
        in(m,n);
        change(m,n);
        for(i=0; i<m; i++)
        {
            for(j=0; j<n-1; j++)
            {
                if(a[i][j]=='*')
                {
                    plus(i,j);
                }
            }
        }

        for(i=0; i<m; i++)
        {
            for(j=0; j<n-1; j++)
            {
                //if(a[i][j]=='\0')
                //{
                //    printf("\n");
                //}
                if(a[i][j]=='*')
                {
                    printf("*");
                }
                else
                {
                    printf("%c",a[i][j]);
                }
            }
        }
    }

}
*/


