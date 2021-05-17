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

void add_at_middle(struct node *head, int data, int position)
{

    struct node *ptr=NULL;
    ptr=head;
    position--;
    while(position!=1)
    {
        ptr=ptr->link;
        position--;
    }
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    temp->link=ptr->link;
    ptr->link=temp;

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

    printf("Existing LinkedList\n");
    print_data(head);
    add_at_middle(head, 100, 2);
    printf("\n\nAfter adding an item at the beginning \n");
    print_data(head);
    printf("\n\nTotal Number of node: %d\n",count_of_node(head));

}



