#include<stdio.h>
int main(){
    int i,j,k,d,arr[10],n;
    printf("Enter the size if the array\n");
    scanf("%d",&n);
    printf("\nEnter the elements of the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nThe array is\n");
     for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    printf("\nEnter the value for search\n");
    scanf("%d",&d);
    for(i=0,j=n;i<=j;){
        k=(i+j)/2;
        if(arr[k]==d){
            printf("Elemnt found at %d position",k);
            break;
        }
        else if(arr[k]<d){
            i=k+1;
        }
        else 
        j=k-1;
       
    }

    return 0;
}