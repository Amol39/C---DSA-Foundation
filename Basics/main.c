#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello, World!";
    char str2[] = "Hello, World!";
    int result = strcmp(str1, str2);
    if(result == 0) {
        printf("The two strings are equal");
    }
    else {
        printf("The two strings are not equal");
    }
    return 0;
}
