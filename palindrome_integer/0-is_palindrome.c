#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * is_palindrome - Check if a number is a palindrome
 *
 * @n: Number to check
 *
 * Return: 1 if n is a palindrome, 0 otherwise
 */
int is_palindrome(unsigned long n){
    char str[20];
    int i;
    int len;
    sprintf(str, "%lu", n);
    len = strlen(str);
    for (i = 0; i < len / 2; i++){
        if (str[i] != str[len - i - 1]){
            return 0;
        }
    }
    return 1;
}
