#include<stdio.h>
#include<string.h>
int main(void)
{
    int i=1;
    int m,n;
    scanf("%d %d",&m,&n);//����j�p

    int x,y;
    scanf("%d %d",&x,&y);//�����H�y��

    char position;//���
    scanf("%c",&position);

    char str[100];
    gets(str);


    if(position=='N')
    {
        position=0;
    }
    else if(position=='E')
    {
        position=1;
    }
    else if(position=='S')
    {
        position=2;
    }
    else//W
    {
        position=3;
    }


    if(str[0]=='R')
    {
        position++;
    }
    else if(str[0]=='F')
    {
        position--;
    }
    else
    {
        if(position==0)
        {
            y++;
        }
        else if(position==1)
        {
            x++;
        }
        else if(position==2)
        {
            y--;
        }
        else//W
        {
            x--;
        }
    }
    for(i=1; str[i]!='\0'; i++)//�r����ܾ����H��V
    {
        if(str[i]=='R')
        {
            position++;//���V
        }
        else if(str[i]=='F')
        {
            position--;//���V
        }
        else//F
        {
            //�V�e���@��
            if(position%4==0)
            {
                y++;
            }
            else if(position%4==1)
            {
                x++;
            }
            else if(position%4==2)
            {
                y--;
            }
            else//W
            {
                x--;
            }
        }
    }
    printf("%d %d",x,y);
    if(position==0)
    {
        printf(" N");
    }
    else if(position==1)
    {
        printf(" E");
    }
    else if(position==2)
    {
        printf(" S");
    }
    else//W
    {
        printf(" R");
    }
    return 0;

}

