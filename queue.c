#include<stdio.h>
int f=0,r=0,que[10],item,n,i=1;
void insert(){
    printf("Enter the size of the queue :");
    scanf("%d",&n);
    if(f==1&&r==n)
    printf("The stack is full\n");
    else if(f==r+1)
    printf("The stack is full\n");
    else if(f==0){
        f=1;
        r=1;
    }
    else if(r==n)
    r=1;
    else r=r+1;
    printf("Enter the value of items");
    while(r<=n){
        scanf("%d",&item);
        que[r]=item;
        r++;
    }
}
void display(){
    printf("The queue is \n");
    while(i<=r){
        printf("%d",que[i]);
        i++;
    }
}
void destroy(){
    if(r==1)
    printf("The stack is empty :( \n");
    item=que[i];
    if(f==r)
    {
        f=0;
        r=0;
    }
    else if(f==n)
    f=1;
    else
    f=f+1;
    i=f;

}
int main(){
insert();
display();
destroy();
display();
return 0;
}