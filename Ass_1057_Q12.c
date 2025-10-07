#include <stdio.h>
int main() {
   int i,arr[20],min,size;
   printf("Enter the size in array; ");
   scanf("%d",&size);
   for(i=0;i<size;i++)
   {
       printf("%d) ",i+1);
       scanf("%d",&arr[i]);  }
   min=arr[0];
   for(i=0;i<size;i++)
   {
       if(min>arr[i])
       {
           min= arr[i];
       }
   }
   printf("Smallest element is: %d",min);
}
