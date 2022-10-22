#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*link;
}*head;


void create_node(int n)
{
    head=(struct node*)malloc(sizeof(struct node));
    struct node *temp=(struct node*)malloc(sizeof(struct node));

    int d;
    printf("Enter data:");
    scanf("%d",&d);
    head->data=d;
    head->link=NULL;
    temp=head;

    for(int i=2;i<n;i++)
    {
      struct node *ptr=(struct node*)malloc(sizeof(struct node));
      int d;
      printf("Enter data:");
      scanf("%d",&d);
      ptr->data=d;
      ptr->link=NULL;
      temp->link=ptr;
      temp=temp->link;
    }
}

void new_node()
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    int d;
    temp=head;
    while(temp)
    {
            printf("data:%d",temp->data);
        temp=temp->link;
    }
}
void insert_node()
{
    printf("Let insert node:\n");
struct node *mynode;
mynode=(struct node*)malloc(sizeof(struct node));
mynode->link=head;
mynode->data=20;
head=mynode;
printf("node inserted:");
}


int main()
{
    int n;
    printf("Enter no.\n");
    scanf("%d",&n);
    create_node(n);
    new_node();
    insert_node();
}
















