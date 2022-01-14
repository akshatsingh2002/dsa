#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *link;
};
typedef struct node nd;
nd *f=NULL;
nd *r=NULL;
void enque(int);
vodid deque();
void display();
void main(){
    int ch,item;
    while(1){
        printf("1.Enque\n2.Deque\n3.Display\n4.Exit");
        printf("\nEnter your choice");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:printf("\nEnter the element");
        scanf("%d",&item);
        enque(item;)
            break;
            case 2:deque();
            break;
            case 3:display();
            break;
        default:exit(0);
            break;
        }
    }
}
void enque(int item){
    nd *n;
    n=(nd*)malloc(sixeof(nd));
    n->info=item;
    n->link=NULL;
    if(r==NULL){
        f=n;
        r=n;

    }
    else {
        r->link=n;
        r=r->link;
    }
}
void deque(){
    nd *n;
    if(f==NULL)
    printf("\nUnderflow");
    n=f;
    printf("\nDeleted element is %d",n->info);
    f=f->link;
    free(n);
    if(f==NULL)
    r=n;
}
void display(){
    nd *n;
    if(f==NULL)
    printf("queue is empty");
    else {
        printf("\nElement in queue are:");
        for(n=f;n!=NULL;n=n->link)
        printf("%d ",n->info);
    }
}