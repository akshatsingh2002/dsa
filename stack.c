#include<stdio.h>
int top=0,stack[5],maxtack=5,item,i;
void push(){
    if(top==maxtack){
        printf("Over flow :(");
    }
    else
    printf("Enter elements in stack\n");
while(top<maxtack){
    scanf("%d",&stack[top]);
    top++;
}

printf("\nThe stack is :");
top=0;
while(top<maxtack){
    printf("%d",stack[top]);
    top++;
}
}
void pop(){
    
    if(top==-1){
        printf("Under flow the stack is empty :(");
    }
    else {
        item=stack[top];
        top=top-1;
    }
}
void peep(){
    printf("Element at top position is %d ",stack[top-1]);
}
int main(){
 int n;
 while(1){
 printf("\n1. for push\n 2. for pop\n 3. for peep\n 4. for \n");
 scanf("%d",&n);
 switch(n){
     case 1:push();
     break;
      case 2:pop();
     break;
      case 3:peep();
     break;
      default:return 0;
     break;
 }
 }
    return 0;
}