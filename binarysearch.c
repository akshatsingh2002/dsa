#include<stdio.h>
int main(){
    int arr[10],n,i,j,k=0,value,flag;
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
    printf("\nEnter the value for serch\n");
    scanf("%d",&value);
        for(i=0,j=n;i<=j;){
            k=(i+j)/2;
            if(arr[i]==value){
                printf("\nThe element is found at %d",k);
            }
           if(arr[i]<value){
            i=k+1;
            }s
            else {
            j=k-1;
            }
        }
        return 0;
    }