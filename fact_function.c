#include<stdio.h>
int fact(int n){
if(n<=1)
    return 1;
return n*fact(n-1);
}
int main(){
int n;
printf("enter the number")
scanf("%d",&n);
printf("factoriol for %d number is :%d",n,fact(n));
return 0;
}





}








