#include<stdio.h>
int fact(int num){

    if(num==0)
    return 1;
    else if (num==1)
    return 1;
    else
    while(num>1){
    return(num*fact(num-1));
    }9
    


}
int main(){
int n;
printf("Enter the number to find its factoria : ");
scanf("%d",&n);
printf("%d",fact(n));
return 0;
}