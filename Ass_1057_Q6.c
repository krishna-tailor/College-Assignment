#include <stdio.h>
int main() {
    int number, counter=0,i;
    printf("Enter a number: ");
    scanf("%d",&number);
    for(i=2;i<number;i++)
    {
        if(number%i==0 && number!=2)
        {
        counter=1;
        break;
        }
    }
    if(counter==1)
    printf("%d is not a prime number", number);
    else
    printf("%d is a prime number");
    return 0;
}
