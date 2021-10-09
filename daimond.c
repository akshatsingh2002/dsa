#include<stdio.h>
int main(){
    int row,i,space,j;
    printf("Enter the number of rows you want to print");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(space=0;space<row-i;space++){
            printf(" ");

        }
        for(j=1;j!=2*i-1;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}