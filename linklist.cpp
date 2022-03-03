#include<bits/stdc++.h>
using namespace std;
struct node
{
 int data;
 struct node *next;
};
struct node *head=NULL;
void insert(int val){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=head;
    head=newnode;
}
void display(){
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<"";
        ptr=ptr->next;
    }
}

int main(){
    insert(11);
    insert(12);
    insert(13);
    display();

    return 0;
}