#include<stdio.h>
void peakelements(int arr[],int len){
    for(int i=1;i<len-1;i++){
    if(arr[i]>arr[i-1] && arr[i]>arr[1+i])
    printf("%d",arr[i]);}
}

    int main()
    {
        int ar[]={9,7,6,8,5};
        peakelements(ar,sizeof(ar)/sizeof (int));
        return 0;
}
