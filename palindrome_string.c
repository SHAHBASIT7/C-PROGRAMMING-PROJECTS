#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int len = strlen(str), isPalindrome = 1;

    for(int i = 0; i < len / 2; i++) {
        if(str[i] != str[len - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not a Palindrome\n");

    return 0;
}