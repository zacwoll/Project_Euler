//A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

// Find the largest palindrome made from the product of two 3-digit numbers.
#include <math.h>
#include <stdio.h>
#define BUF_SIZE 8

/**
 * main - Entry Point
 * Return: 0;
 */
int main(void) {
    char buffer[7] = {};
    int i = 900009;
    snprintf(buffer, BUF_SIZE-1, "%d", i);
    printf("%s\n", buffer);

    char palindrome[7] = {};
    snprintf(palindrome, BUF_SIZE-1, "%d", i);
    printf("%s\n", palindrome);
    return (0);
}