#include<stdio.h>
#include<stdlib.h>
void main(){
    struct node
    {
        int data;
        struct node * next;        
    };
    struct node * head,* newnode,* temp;
    head=0;
    int choice,count=0,position,i=0,choice1;
    while(choice){
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter data: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        head=temp=newnode;
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("do you want to continue:");
        scanf("%d",&choice);
    
    }
    temp=head;
    while(temp!=0){
        printf("%d\t",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\nthe no.of elements are %d \n",count);
    printf("do you want to insert element?(1 or 0)");
    scanf("%d",&choice1);
    while(choice1>0){
        printf("enter position");
        scanf("%d",&position);
        if(position==0){
            newnode=(struct node *)malloc(sizeof(struct node));
            printf("enter the value");
            scanf("%d",&newnode->data);
            newnode->next=head;
            head=newnode;
            newnode->next=0;

        }
        else if(position>0 && position<count){
            printf("enter element");
        scanf("%d",&newnode->data);
        temp=head;
        while(i<position){
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
        }
        else if(position==count){
            temp=head;
        while(temp->next!=0){
            temp=temp->next;
        }
        temp->next=newnode;

        }
        else
        printf("invalid input");

        printf("do you want to insert element?(1 or 0)");
    scanf("%d",&choice1);


        }
    
}
