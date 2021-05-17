#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *link;
};

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


struct node *del_at_begining(struct node *head)
{

    struct node *temp=(head);
    head=head->link;
    free(temp);
    temp=NULL;

    return head;
}


int main()
{

    struct node *head=(struct node*)malloc(sizeof(struct node));
    head->data=10;
    head->link=NULL;

    struct node *current=(struct node*)malloc(sizeof(struct node));
    current->data=20;
    current->link=NULL;

    head->link=current;

    current=(struct node*)malloc(sizeof(struct node));
    current->data=30;
    current->link=NULL;

    head->link->link=current;


    print_data(head);
    head=del_at_begining(head);
    printf("\n\nAfter adding an item at the beginning \n");
    print_data(head);
}
