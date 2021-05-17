#define N 5
#include<stdio.h>
#include<stdlib.h>
int stack[N];
int top=-1;
void push(){
    int x;
    printf("enter the element");
    scanf("%d",&x);
    if(top==N-1)
    printf("stack oberflow");
    else{
        top++;
        stack[top]=x;

    }
}
void pop(){

    int item;
    if(top==-1)printf("stack underflow");
    else{
        printf("popped element is:%d",stack[top]);
        top--;
    }
}
void peek(){
    if (top==-1)printf("statck empty");
    else printf("latest element is:%d",stack[top]);
}
void isEmpty(){
    if (top==-1) printf("Empty");
    else printf("not empty");
}
void display(){
    for(int i=0;i<=top;i++) printf("%d",stack[i]);
}
int main(){
    int des=1;
    while(des){
        printf(" 1.push \n 2.pop \n 3.peek \n 4.isempty \n 5.display \n enter choice:");
        scanf("%d",&des);
        if(des==1) push();
        else if(des==2) pop();
        else if(des==3) peek();
        else if(des==4) isEmpty();
        else if(des==5) display();
        else printf("inavlid input");
        printf("do you want to continue? (1/0)");
        scanf("%d",&des);

    }
}
