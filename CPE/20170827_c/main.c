/*#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<stdlib.h>

typedef struct pair{
    int frequency;
    char charASCII;
}pair;

int compare(const void* a,const void* b)
{
    if((((pair*)a)->frequency)!=(((pair*)b)->frequency))
    {
        return (((pair*)a)->frequency)-(((pair*)b)->frequency);
    }
    else
    {
        return (((pair*)b)->charASCII)-(((pair*)a)->charASCII);
    }
}

void print(pair* myData)
{
    int i;
    for(i=0;i<95;i++)
        (myData[i].frequency==0)?printf(""):
    printf("%d %d\n",myData[i].charASCII,myData[i].frequency);
}
int main(void)
{
    struct pair* myData=(struct pair*)malloc(95*sizeof(struct pair));
    int i,len,flag=0;
    char str[9999];
    while(gets(str)!=NULL)
    {
        for(i=0;i<95;i++)
        {
            (myData+i)->charASCII=i+32;
            (myData+i)->frequency=0;
        }
        if(flag!=0)
        {
            print("\n");
        }
        flag++;
        len=strlen(str);
        for(i=0;i<len;i++)
        {
            myData[str[i]-32].frequency++;
            qsort(myData,95,sizeof(struct pair),compare);
            print(myData);
        }
    }
}
*/

/*#include<stdio.h>
int main(void)
{
    int group;
    int a[100];
    int n;
    int i;
    int swap=0;
    int doswap=0;
    int tmp;
    scanf("%d",&group);
    while(group--)
    {
        swap=0;
        doswap=0;
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0; i<n; i++)
        {
            if(a[i]>a[i+1])
            {
                tmp=a[i];
                a[i]=a[i+1];
                a[i+1]=tmp;
                doswap=1;
                swap++;
            }
            if(doswap==0)
            {
                break;
            }
        }
        printf("%d",swap);
    }

}*/

/*#include<stdio.h>
#include<string.h>
int main(void)
{
    char x[]="happy birth'da;y to y,ou";
    char y[25];
    char z[15];
    printf("%s%s\n%s%s\n","the string in array x is:",x,"the string in array y is:",strcpy(y,x));
    strncpy(z,x,14);
    z[14]='\0';
    printf("z : %s",z);
    return 0;
}
*/

#include<stdio.h>
int main(void)
{
    int i,j;
    int tmp=0;
    int count=0;
    int a[4]={4,3,2,1};
    for(i=0;i<4;i++)
    {
        for(j=0;j<3-i;j++)
        {
            if(a[j]>a[j+1])
            {
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
            count++;
        }
    }
    printf("%d",count);
    //for(i=0;i<4;i++)
    //{
    //    printf(" %d",a[i]);
    //}
}

















