/*#include<stdio.h>

int main(void)
{
    int n;
    int i;
    int a[100];
    scanf("%d",&n);
    for(i=0; i<100; i++)
    {
        while(n>9)
        {
            a[i]=n%10;
        }
        printf("%d",a[i]);
    }
}*/


#include <stdio.h>
#include <stdlib.h>


int main(){
    char str_num[100];
    int num[100];
    int len = 0;
    int i = 0;


    scanf("%s",str_num);
    printf("%s\n",str_num);
    for(i=0;str_num[i]!='\0';i++){
        num[i] = str_num[i] - '0';
    }
    len = i;
    for(i=0;i<len;i++){
        printf("%d",num[i]);
    }
    printf("\n");

    int sum = 0;
    while(len>1){
        sum = 0;
        for(i=0;i<len;i++){
            sum += num[i];
        }
        if(sum<10){
            printf("%d",sum);
            break;
        }
        i=0;
        while(sum>0){
            num[i] = sum%10;
            sum/=10;
            i++;
        }
        len = i;
    }
    /*
    printf("%d\n",'0');
    printf("%d\n",'1');
    printf("%d\n",'2');
    printf("%d\n",'3');
    printf("%d\n",'4');
    printf("%d\n",'5');
    printf("%d\n",'6');
    printf("%d\n",'7');
    printf("%d\n",'8');
    printf("%d\n",'9');
    */
    return 0;
}









