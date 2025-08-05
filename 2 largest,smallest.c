nclude <stdio.h>
int main()
{

   int N;
   scanf("%d",&N);
   int a[N];
   for(int i=0;i<N;i++)
       scanf("%d",&a[i]);
   for(int i=0;i<N;i++)
   {
       for(int j=i+1;j<N;j++)
       {
           if(a[j]<a[i]){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
           }
       }
   }
   printf("Second largest :%d",a[N-2]);
   printf("\nSecond Smallest :%d",a[1]);

    return 0;
}
