#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    int len1, len2;
    printf("Enter first string: ");
fgets(str1, 100, stdin);
    printf("Enter second string: ");
    fgets(str2, 100, stdin);
    len1 = strlen(str1);
    len2 = strlen(str2);
    if(len1 > len2)
        printf("First string is longer.\n");
    else if(len2 > len1)
        printf("Second string is longer.\n");
    else
        printf("Both strings are of equal length.\n");
    return 0;
}
