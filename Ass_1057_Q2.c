#include <stdio.h>
int main() {
    int a, b, c; 
    printf("Enter three numbers: ");
   scanf("%d %d %d", &a, &b, &c);
   if(a<b && a<c)
   printf("%d is the largest\n", a);
   else if(b<c && b<a)
   printf("%d is the largest\n", b);
   else if (c<b && c<a)
  printf("%d is the largest\n", c);
}