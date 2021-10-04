#include<stdio.h>
int main(){
    int arr[10],i,n,p;
    printf("Enter the number of elements you want to enter\n");
    scanf("%d",&n);
    printf("Enter the elemnts in the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\nEnter the postion of the element you want to delete");
    scanf("%d",&p);
   
    for(i=p;i<=n;i++)
    {
        arr[i]=arr[i+1];
    }
    n=n-1;
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    
    return 0;
}