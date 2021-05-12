#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *link;
};


int count_of_node(struct node *head)
{
    int cnt=0;
    if(head==NULL)
    {
        cout<<"Empty"<<endl;
    }
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        cnt++;
        ptr=ptr->link;
    }
    return cnt;
}

void print_data(struct node *head)
{
    int cnt=0;
    if(head==NULL)
        cout<<"Empty"<<endl;

    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        cnt++;
        printf("\nValue of node(%d)= %d",cnt,ptr->data);
        ptr=ptr->link;
    }
}

struct node *add_at_begining(struct node *head, int data)
{

    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    temp->link=head;

    head=temp;

    return head;
}

int main()
{

    struct node *head=(struct node *)malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node *current=(struct node *)malloc(sizeof(struct node));
    current->data=55;
    current->link=NULL;
    head->link=current;

    current=(struct node *)malloc(sizeof(struct node));
    current->data=65;
    current->link=NULL;
    head->link->link=current;

    print_data(head);
    head=add_at_begining(head, 100);
    printf("\n\nAfter adding an item at the beginning \n");
    print_data(head);
    printf("\n\nTotal Number of node: %d\n",count_of_node(head));

}


