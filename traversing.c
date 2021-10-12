#include<stdio.h>
int main(){
    int arr[10],n,i;
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
    //performing traversing//
    printf("\nPerforming Traversing\n");
    for(i=0;i<n;i++){
        arr[i]=arr[i]*2;
    }
    printf("\nThe traverserd array is\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}