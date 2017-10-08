#include<stdio.h>
/*int box[10];

void Add(int data, int *head, int *tail);
int Delete(int *head, int *tail);

int main(void)
{
    int value;
    int i;
    int tail=0,head=0;

    for(i=0;i<12;i++){
        Add(i, &head, &tail);
    }

    printf("Delete\n");
    for(i=0;i<3;i++){
        value = Delete(&head, &tail);
        if(value!=-1){ printf("%d ", value); }
    }
    printf("Delete\n");
    for(i=0;i<10;i++){
        value = Delete(&head, &tail);
        if(value!=-1){ printf("%d ", value); }
    }
}

void Add(int data, int *head, int *tail){
    if((*tail+1)%10 == *head){
        printf("full\n");
    }else{
        box[*tail] = data;
        (*tail)++;
    }
}
int Delete(int *head, int *tail){
    int tmp = 0;
    if((*tail+10-*head)%10>0){
        tmp = box[*head];
        *head = (*head+1)%10;
        return tmp;
    }else{
        printf("delete error\n");
        return -1;
    }
}*/


int main(void)
{
    int value;
    int i;
    int tail=0,head=0;
    int box[10];

    for(i=0; i<12; i++)
    {
        if((tail+1)%10 == head)
        {
            printf("full\n");
        }
        else
        {
            box[tail] = i;
            (tail)++;
        }
    }

    printf("Delete\n");
    for(i=0; i<3; i++)
    {
        value=-1;
        if((tail+10-head)%10>0)
        {
            value = box[head];
            head = (head+1)%10;
        }
        if(value!=-1)
        {
            printf("%d ", value);
        }
        else
        {
            printf("delete error\n");
            break;
        }
    }
    printf("Delete\n");
    for(i=0; i<10; i++)
    {
        value=-1;
        if((tail+10-head)%10>0)
        {
            value = box[head];
            head = (head+1)%10;
        }
        if(value!=-1)
        {
            printf("%d ", value);
        }
        else
        {
            printf("delete error\n");
            break;
        }
    }
}















