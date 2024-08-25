#include<stdio.h>

int main()
{
      int n;
      scanf("%d",&n);

      int arr[n],i,j,temp;
      for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
      }

      for(i=0,j=n-1;i<j;i++,j--){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
      }
      for(i=0;i<n;i++){
            printf("%d ",arr[i]);
      }
}