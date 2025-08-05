#include<stdio.h>

int main(){
    int n;
    int sum=0;
    float average;
    printf("enter the elements");
    scanf("%d",&n);
    int a[n];
    printf("enter %d elements",n);
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    sum=sum+a[i];}
    printf("sum is %d",sum);
    average=(float)sum/n;
    printf("average is %f",average);
return 0;
}
