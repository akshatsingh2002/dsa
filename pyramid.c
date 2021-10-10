#include<stdio.h>
int main(){
    int i,space,j,row;
    printf("Enter how many rows do you need");
    scanf("%d",&row);
    for(i=0;i<row;i++){
        for(space=0;space<row-i;space++){
            printf(" ");
        }
        for(j=0;j<2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}