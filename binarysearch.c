#include<stdio.h>
int main(){
    int arr[10],n,i,j,k=0,d;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("\nEnter the elements of the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nThe arrays is\n");
      for(i=0;i<n;i++){
        printf("%d",arr[i]);
      }
    printf("\nEnter the value for search\n");
   scanf("%d,&d");
   printf("%d",d);
   for(i=0,j=n;i<=j;){
       k=(i+j)/2;
       if(arr[i]=d){
           printf("\nThe element is found at%d",k);
           break;
       }
       else if(arr[i]<d){
           i=k+1;
       }
       else
       j=k-1;
       

       }
   
        return 0;
    }