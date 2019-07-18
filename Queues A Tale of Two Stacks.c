#include<stdio.h>
#include<malloc.h>

int queue[100000];
int ans[100000];
int k=0;
int count=0;
int front=-1;
int rear=-1;

void inqueue(int ele)
{
    if(front==-1)
    {
        front++;
        rear++;
        queue[rear]=ele;
    }

    else
    {
        rear++;
        queue[rear]=ele;
    }
}

void dequeue()
{
    if(front==-1)
    {
        printf("no elements to dequeue");
    }

    else
    {
        front++;
    }
}

void peek()
{
    if(front==-1)
        printf("no elements");
    else
    {
        ans[k]=queue[front];
        k=k+1;
        count++;
    }
}

int main()
{
    int i,ele,j;
    int no,option;
    scanf("%d",&no);

    for(i=0;i<no;i++)
    {
        scanf("%d",&option);
        if(option==1)
        {
            scanf("%d",&ele);
            inqueue(ele);
        }

        else if(option==2)
        {
            dequeue();
        }

        else if(option==3)
        {
            peek();
        }
    }

    for(j=0;j<count;j++)
        printf("%d\n",ans[j]);
}