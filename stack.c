#include<stdio.h>
int i,top,stack[5],maxtack=5;
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
top=0;
printf("\nThe stack is :");
while(top<maxtack){
    printf("%d",stack[top]);
}
}
int main(){
 int n;
 printf("1. for push\n 2. for pop\n 3. for peep\n 4. for exit");
 scanf("%d",&n);
 switch(n){
     case 1:push();
     break;
      case 2:pop();
     break;
      case 3:peep();
     break;
      case 4:return 0;
     break;
 }
    return 0;
}