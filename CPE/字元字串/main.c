/*#include<stdio.h>
int main(void)//輸入字串
{
    char str[20]={};
    fgets(str,20,stdin);
    printf("%s\n",str);
}
*/

/*#include<stdio.h>
int main(void)//輸入字串
{
    char str[20]={};
    gets(str);
    printf("%s\n",str);
}
*/

/*#include<stdio.h>
int main(void)//輸入字元
{
    char c;
    c=getchar();
    //printf("%c\n",c);
    putchar(c);
    putchar('\n');
}*/

/*#include<stdio.h>
int main(void)//算字串長度
{
    char str[100]={};
    int len=0;
    int i;
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        len++;
    }
    printf("%d",len);
}
*/

#include<stdio.h>
int main (void)
{
    char c='a';
    printf("%d",c);
}
