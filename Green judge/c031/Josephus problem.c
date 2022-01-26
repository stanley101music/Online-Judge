#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int id;
    struct Node* next;
}Node;

Node* head;

Node* createList(int n)
{
    head=(Node*)malloc(sizeof(Node));
    Node *cur=head;
    head->id=1;
    int i;
    for(i=2;i<=n;i++)
    {
        Node *temp=(Node*)malloc(sizeof(Node));
        temp->id=i;
        cur->next=temp;
        cur=temp;
    }
    cur->next=head;
    return head;
}

int Josephus(int n,int step)
{
    Node *temp=head;
    int i;
    while(temp->next!=temp)
    {
        if(step!=1)
        {
            for(i=1;i<step-1;i++)
                temp=temp->next;
            temp->next=temp->next->next;
            temp=temp->next;
        }
        else
            return n;
    }
    return temp->id;
}
int main(void)
{
    int N,P;

    scanf("%d %d",&N,&P);

    head=createList(N);
    printf("%d\n",Josephus(N,P));

    return 0;
}
