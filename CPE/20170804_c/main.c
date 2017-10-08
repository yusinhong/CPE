#include <stdio.h>
#include <string.h>

//CPE 1
/*
int main(void)
{
    //printf("hello world");
    //toupper('a');
    int nn,ii,jj;
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
    char str[100];
    char str2[100];
    scanf("%d",&nn);
    getchar();
    for(jj=0; jj<nn; jj++)
    {
        ii = 0;
        do
        {
            scanf("%c",&str[ii]);
            if(str[ii]=='\n'){ break; }
            ii++;
        }while(1);
        str[ii+1]='\0';
        printf("%s\n",str);
        system("pause");

        for(ii=0; str[ii]!='\n'; ii++)
        {

            if(str[ii]==' ')
            {
                continue;
            }
            str2[ii]=toupper(str[ii]);
            switch(str2[ii])
            {
            case 'A':
            case 'a':
                ++a;
                break;
            case 'B':
            case'b':
                ++b;
                break;
            case 'C':
            case 'c':
                ++c;
                break;
            case 'D':
            case 'd':
                ++d;
                break;
            case 'E':
            case 'e':
                ++e;
                break;
            case 'F':
            case 'f':
                ++f;
                break;
            case 'G':
            case 'g':
                ++g;
                break;
            case 'H':
            case 'h':
                ++h;
                break;
            case 'I':
            case 'i':
                ++i;
                break;
            case 'J':
            case 'j':
                ++j;
                break;
            case 'K':
            case 'k':
                ++k;
                break;
            case 'L':
            case 'l':
                ++l;
                break;
            case 'M':
            case 'm':
                ++m;
                break;
            case 'N':
            case 'n':
                ++n;
                break;
            case 'O':
            case 'o':
                ++o;
                break;
            case 'P':
            case 'p':
                ++p;
                break;
            case 'Q':
            case 'q':
                ++q;
                break;
            case 'R':
            case 'r':
                ++r;
                break;
            case 'S':
            case 's':
                ++s;
                break;
            case 'T':
            case 't':
                ++t;
                break;
            case 'U':
            case 'u':
                ++u;
                break;
            case 'V':
            case 'v':
                ++v;
                break;
            case 'W':
            case 'w':
                ++w;
                break;
            case 'X':
            case 'x':
                ++x;
                break;
            case 'Y':
            case 'y':
                ++y;
                break;
            case 'Z':
            case 'z':
                ++z;
                break;

            }
        }
    }



    printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ",a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z);



    return 0;
}
*/


int main()
{
    int score[26]={};
    int time = 0;
    int i = 0, j = 0;
    char str[300] = " ";

    scanf("%d",&time);
    getchar();
    for(i=0;i<time;i++){
        j = 0;
        do{
            scanf("%c",&str[j]);
            if(str[j]=='\n'){ break; }
            j++;
        }while(1);
        str[j+1]='\0';
        for(j=0;str[j]!='\n';j++){
            if(('a'<=str[j] && str[j]<='z') || ('A'<=str[j] && str[j]<='Z')){
                char tmp = toupper(str[j]);
                score[tmp-'A']++;
            }

        }
    }
    for(i=0;i<26;i++){
        printf("%c: %d\n",'A'+i,score[i]);
    }
    return 0;
}


//----
//CPE 2
/*int main()
{
    char array[48]="`1234567890-=qwertyuiop[]\ asdfghjkl;'zxcvbnm,,/,";
    char str[100];
    char str2[100];
    int i,j,tmp;
    for(i=0;; i++)
    {
        scanf("%c",&str[i]);
        if(str[i]=='\n')
        {
            break;
        }
        str2[i]=tolower(str[i]);
        if(str2[i]==' ')
        {
            printf(" ");
            continue;
        }
        for(j=2; j<46; j++)
        {
            if(str2[i] == array[j])
            {
                tmp=j;
                printf("%c",array[tmp-2]);
            }
        }
    }




    return 0;
}*/

//`,1,2,3,4,5,6,7,8,9,0,-,=,q,w,e,r,t,y,u,i,o,p,[],\,a,s,d,f,g,h,j,k,l,;,',z,x,c,v,b,n,m,,.,/,
