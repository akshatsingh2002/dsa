#include<stdio.h>
int f=-1,r=-1,que[10],value,max,i;
void insert(){
  if(f==(r+1)%max){
      printf("\nOverflow");
  }
  
  else {
  printf("\nEnter the value");
  scanf("%d",&value);
  if(f==-1)
      f=r=0;
      else
      r=(r+1)%max;
  que[r]=value;
  printf("front=%d\trear=%d",f,r);
      
}
}

void deletion(){
   if(f==-1)
   printf("\nUnderflow");
   else{
   value=que[f];
   if(f==r)
   f=r=-1;
   else 
   f=(f+1)%max;
   }
   printf("\nfront=%d\trear=%d",f,r);

}
void display(){
    if (f==-1)
    {
        printf("\nQueue is Empty");
       
    }
    printf("\nElements in Circular Queue are: ");
    if (r>= f)
    {
        for (i=f;i<=r;i++)
            printf("%d",que[i]);
    }
    else
    {
        for (i=f;i<max;i++)
            printf("%d", que[i]);
 
        for (i=0;i<=r;i++)
            printf("%d", que[i]);
    }
}

int main(){
    int a=0,b;
    printf("Enter the size for the circular queue");
    scanf("%d",&max);
    printf("\n1.For Entering\n2.For Deleting\n3.For Display\n4.For Exit\n");
    while(a==0){
        scanf("%d",&b);
        switch (b)
        {
        case 1:insert(); 
            break;
            case 2:deletion();
            break;
            case 3:display();
            break;
            case 4:a++;
            break;
        default:a++;
            break;
        }
    }

return 0;
}