#include<stdio.h>
int main(){
    int i,space,j,row;
    printf("Enter how many rows do you need");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(space=0;space<row-i;space++){
            printf(" ");
        }
        for(j=1;j<=2*i-2;j++){
            printf("%d",j);

        }
        printf("1\n");
    }
    return 0;
}