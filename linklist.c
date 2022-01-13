#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<string.h>
struct node{
    int data;
    struct node *next;
}*start;
void create(int);
void display();
void add(int);
void del(int);
void main(){
    int i,ch,pos,num;
    start=NULL;
    while(1){
        printf("\n1.Create\n2.Display\n3.Add\n4.Delete\n5.Exit");
        printf("\nEnter your choice");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:printf("\nEnter item to add in the list \n");
        scanf("%d",&num);
        create(num);
            break;
        case 2:display();
            break;
            case 3:printf("\nEnter a new node itm in the beginning of the list\n");
        scanf("%d",&num);
        add(num);
            break;
            case 4:printf("\nEnter the number you want to remove");
            scanf("%d",&num);
            del(num);
            break;
        default:exit(0);
            break;
        }
    }
}
void create(int num){
    struct node *q,*t;
if(start==NULL){
    start=(struct node*)malloc(sizeof(struct node));
    start->data=num;
    start->next=NULL;

}
    else{
        q=start;
        while(q->next!=NULL){
            q=q->next;
        }
        t=(struct node*)malloc(sizeof(struct node));
        t->data=num;
        t->next=NULL;
        q->next=t;
    }
}
void display(){
    struct node *q;
    if(start==NULL){
        printf("\nList in empty");
    }
    else{
        printf("\nThe item in the list :");
        for(q=start;q!=NULL;q=q->next){
            printf("%d ",q->data);
        }
    }
}
void add(int num){
    struct node *q;
     q=(struct node*)malloc(sizeof(struct node));
        q->data=num;
        q->next=start;
        start=q;
}
void del(int num){
    struct node *q,*t;
    q=start;
    if(q==NULL){
        printf("\nThe list is empty");
        
    }
    else if(q->data=num){
        start=q->next;
        printf("\nElement removed");
        free(q);
    t=q;
    q=q->next;
    }
    else{
    while(q!=NULL){
        if(q->data==num){
        t->next=q->next;
        printf("\nItem removed");
        free(q);
        
    }
    t=q;
    q=q->next;
    }
    printf("\nItem is not found");
    }
}