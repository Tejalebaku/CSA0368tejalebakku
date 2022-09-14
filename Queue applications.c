#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int f=-1,r=-1;
int que[SIZE];

int enqueue()
{
    if(r==SIZE-1)
        printf("\n the stack is full \n");
    else
    {
        if(f==-1)
            f=0;
            int ele;
            printf("\n enter the element \n");
            scanf("%d",&ele);
            r=r+1;
            que[r]=ele;
    }
}
int dequeue()
{
    int ele;

    if(f==-1 || f>r)
        printf("\n the stack is empty \n");
    else
     {
        ele=que[f];
        f+=1;
     }
    printf("\n the deleted element %d \n",ele);
}
int display()
{
    int i;
    if(f==-1)
        printf("\n stack is empty \n");
    else
        for(i=f;i<=r;i++)
        {
            printf("%d  ",que[i]);
        }
}
int main()
{
    int ch;
    do
    {
    printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit");
    printf("\n enter the choice \n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("\n wrong input");
    }
    } while(ch>=0 && ch<=5);
}
