#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[100];
    char str2[100];
    int count=0;
    int i;
    scanf("%s",str);
    scanf("%s",str2);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==str2[i])
        {
            count++;
        }
    }
    if(count==strlen(str))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
