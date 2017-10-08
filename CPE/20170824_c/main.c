/*#include<stdio.h>
#include<string.h>
#include<math.h>
#define PI 2*acos(0.0)
int main(void)
{
    double s,a;
    char array[4];
    double arc ,chord;
    while(scanf("%lf %lf %s",&s,&a,array))
    {
        if(strcmp(array,"min")==0)
        {
            a=a/60;
        }
        if(a>180)
        {
            a=360-a;
        }
        arc=2*PI*(s+6440)*a/360;
        chord=(s+6440)*sin(a*PI/2/180)*2;
        printf("%.6lf %.6lf",arc,chord);
    }
    return 0;
}
*/

/*#include<stdio.h>
int main()
{
    int n,z,x,c,v;
    scanf("%d",&n);
    int resa=0,resb=0;
    while(n--)
    {
        scanf("%d %d %d %d",&z,&x,&c,&v);
        resa=(z+x+1)*(z+x)/2+z;
        resb=(c+v+1)*(c+v)/2+c;
        printf("%d",resb-resa);
    }
}
*/
/*#include<stdio.h>
int main(void)
{
    double x[4],y[4],xa,ya;
    while(for(i=0; i<4; i++)
    {
        scanf("%.3lf %.3lf",&x[i],&y[i]);
        })
    {
        if(x[0]==x[2]&&y[0]==y[2])
        {
            xa=x[3]+x[1]-x[2];
            ya=y[3]+y[1]+y[2];
        }
        else if(x[1]==x[2]&&y[1]==y[2])
        {
            xa=x[3]+x[0]-x[2];
            ya=y[3]+y[0]+y[2];
        }
        else if(x[0]==x[3]&&y[0]==y[3])
        {
            xa=x[2]+x[1]-x[3];
            ya=y[2]+y[1]+y[3];
        }
        else
        {
            xa=x[2]+x[0]-x[3];
            ya=y[2]+y[0]+y[3];
        }
        printf("%.3lf %.3lf",xa,ya);
    }
}
*/
