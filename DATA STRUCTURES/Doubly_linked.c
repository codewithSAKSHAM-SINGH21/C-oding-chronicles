#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int val;
    struct Node *next ,*prev;
} node;
node *head = NULL;
void dublinsertatBegin(int val)
{
    node *newNode = (node *)malloc(sizeof(node));
    if(newNode == NULL){
        printf("MEMORY NOT ALLOCATED.\n");
        return;
    }
    newNode->val = val;
    newNode->next = head;
    newNode->prev = NULL;
    if(head != NULL) 
    {      
        head->prev = newNode;
    }
    head = newNode;
    printf("NODE INSERTED AT THE BEGINNING.\n");
}
void doublinsertatEnd(int val)
{
    node*newnode=(node*)malloc(sizeof(node));
    if(newnode==NULL)
    {
        printf("MEMORY NOT ALLOCATED.\n");
        return;
    }
    newnode->val=val;
    newnode->next=NULL;
    newnode->prev=NULL; 
    if(head==NULL)
    {
        head=newnode;
        printf("newnode inserted at the end.\n");
        return;
    }
    node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
    printf("newnode inserted at the end sucessfully.\n");
}
void dublinsertatPos(int val,int pos)
{
    if(pos<0)
    {
        printf("invalid position\n");
        return;
    }
    node*newnode=(node*)malloc(sizeof(node));
    if(newnode==NULL)
    {
        printf("memory not a;;ocated\n");
        return;
    }
    newnode->val=val;
    if(pos==0)
    {
        newnode->next=head;
        if(head!=NULL)
        {
            head->prev=newnode;
        }
        head=newnode;
        printf("newnode inserted at the position %d\n",pos);
        return;
    }
    node*temp=head;
    int i;
    for(i=0;i<pos-1&&temp!=NULL;i++)
    {
        temp=temp->next;
    }
    if(temp==NULL)
    {
        printf("invalid positioon\n");
        free(newnode);
        return;
    }
    if(temp->next!=NULL)
    {
        temp->next=newnode;
        newnode->prev=temp;    
    }
    newnode->next=temp->next;
    temp->next->prev=newnode;
    temp->next=newnode;
    printf("newnode inserted at the position %d\n",pos);
}
int main ()
{
    int choice,val,pos;
    while(1)
    {
        printf("1. Insert at the beginning\n");
        printf("2. Insert at the end\n");
        printf("3. Insert at a specific position\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d",&val);
                dublinsertatBegin(val);
                break;
            case 2:
                printf("Enter value to insert: ");
                scanf("%d",&val);
                doublinsertatEnd(val);
                break;
            case 3:
                printf("Enter value and position to insert: ");
                scanf("%d %d",&val,&pos);
                dublinsertatPos(val,pos);
                break;
            case 4:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}