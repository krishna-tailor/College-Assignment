#include <stdio.h>
int main() {
    int num, n, i;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter how many multiples you want: ");
    scanf("%d", &n);

    printf("First %d multiples of %d are:\n", n, num);
    for(i = 1; i <= n; i++) {
        printf("%d ", num * i);
    }
    return 0;
}
