#include<stdio.h>
int main(){
    int arr[100],i,index,d,n,flag;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("\nEnter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nThe array is\n");
     for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\nENter the number you want to search\n");
    scanf("%d",&d);
     for(i=0;i<n;i++){
        if(arr[i]==d){
            flag=51;
           
            break;
        }
        else{
        flag=0;
        }
        index++;
        }
        if(flag==1){
             printf("\narray found at %dindex",index);
        }
        else
        printf("\nElement not found");
        
return 0;
}