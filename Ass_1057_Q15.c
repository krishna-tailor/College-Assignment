#include <stdio.h>
#include <string.h>
int main() {
    char str[100],temp;
    int i = 0, j;
    printf("Enter a string: ");
    gets(str);
    int len = strlen(str);
    j = len - 1;
    while(i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;  // increment start
        j--;  // decrement end
    }
    printf("Reversed string: %s\n", str);
    return 0;
}
