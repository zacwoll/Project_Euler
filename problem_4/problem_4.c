//A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

// Find the largest palindrome made from the product of two 3-digit numbers.
#include <math.h>
#include <stdio.h>

// the number is 6 long

int isPalindromic(int i) {
    const int BUF_SIZE = 8;
    char palindrome[7] = {};
    snprintf(palindrome, BUF_SIZE-1, "%d", i);
    char *left = palindrome, *right = palindrome + 5;

    while (left < right) {
        if (*left != *right)
        {
            return 0;
        }
        left++, right--;
    }
    return 1;
}

/**
 * main - Entry Point
 * Return: 0;
 */
int main(void) {
    int i, j, largest = 11111;
    // For every product of two 3-digit numbers
    // if palindromic, return it.

    for (int j = 999; j > 600; j--) {
        for (int i = 999; i > 600; i--) {
            // printf("%d", i * j);
            if (i * j > largest && isPalindromic(i * j)) {
                largest = i * j;
            }
        }
    }

    printf("The largest palindrome of two 3-digit numbers is %d\n", largest);

    return (0);
}