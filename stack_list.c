#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct stack{
    int info;
    struct  stack *next;
    
};
typedef struct stack node;
node *top=NULL;
void push(int);
int pop();
void display();
void main(){
    int ch,i,item;
    while(1){
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
        printf("\nEnter your choise");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:printf("\nEnter item");
        scanf("%d",&item);
        push(item);
            break;
        case 2:printf("\npoped item is %d",pop());
        break;
        case 3:printf("\nStack display");
       display();
        break;
        default:exit(0);
            break;
        }
    }

}
void push(int item){
    node *newnode;
    newnode=(node*)malloc(sizeof(node));
    newnode->info=item;
    newnode->next=top;
    top=newnode;
}
int pop(){
    int x;
    node *ptr;
    if(top==NULL)
    printf("\nStack is underflow");
    else{
    x=top->info;
    ptr=top;
    top=top->next;
   
    free(ptr);
     
    return x;
    }
    return 0;
}
void display(){
     node *i;
    for(i=top;i!=NULL;i=i->next){
        printf("%d",i->info);
    }
}