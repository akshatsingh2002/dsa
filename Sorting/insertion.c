#include<stdio.h>
int main(){
    int arr[10],i,n,p,k;
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
    printf("\nEnter the index where you want to insert a new number");
    scanf("%d",&p);
    printf("\nEnter the new element");
    scanf("%d",&k);
    for(i=n;i>=p;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[p]=k;
    n=n+1;
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    
    return 0;
}