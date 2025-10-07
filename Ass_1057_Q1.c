#include <stdio.h>
int main()
{
    int i, arr[20], max, size;
    printf("Enter the size in array; ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("%d) ", i + 1);
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("Larget number is: %d", max);
}
