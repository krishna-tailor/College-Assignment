#include <stdio.h>
int main() 
{
    int i,j,temp,arr[100],size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {                                                   // Geeting value from users
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }  
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {                                     // sorting array
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            } 
        }
    }
     printf("2nd largest element is %d",arr[1]);
}
